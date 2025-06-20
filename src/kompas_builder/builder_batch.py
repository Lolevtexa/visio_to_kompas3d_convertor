import json
import sys
import argparse
from .kompas_app import KompasApp
from .kompas2d import Kompas2D
import math

ANGLE_THRESHOLD = math.radians(1.0)
ANGLE_THRESHOLD_DEG = 1.0

def _smart_snap(x1, y1, x2, y2):
    dx, dy = x2 - x1, y2 - y1
    angle = abs(math.atan2(dy, dx))
    mod   = angle % (math.pi/2)
    diff  = min(mod, math.pi/2 - mod)
    if diff < ANGLE_THRESHOLD:
        if abs(dy) < abs(dx):
            # горизонталь
            y = round((y1 + y2) / 2, 2)
            return x1, y, x2, y
        else:
            # вертикаль
            x = round((x1 + x2) / 2, 2)
            return x, y1, x, y2
    # наклонные — без изменений
    return x1, y1, x2, y2

def _smart_rect_dims(w, h, ang_deg):
    """
    Если ang_deg почти кратен 90°, делаем ang=0 и, при необходимости,
    меняем местами w и h для вертикальных ориентаций.
    """
    k = round(ang_deg / 90.0)
    if abs(ang_deg - k * 90.0) < ANGLE_THRESHOLD_DEG:
        # «привязываем» к 0°
        if k % 2 != 0:
            # 90° или 270° → меняем местами ширину и высоту
            return h, w, 0.0
        else:
            # 0° или 180° → просто убираем угол
            return w, h, 0.0
    # иначе оставляем как есть
    return w, h, ang_deg

class Builder:
    def __init__(self):
        self.kompas = KompasApp()
        self.doc2d = Kompas2D(self.kompas)
        self.sheet_w, self.sheet_h, self.margin = 420.0, 297.0, 10.0

    # def format_sheets(self, total):
    #     """
    #     Обеспечивает, чтобы в 2D-документе было ровно total листов.
    #     Если листов меньше, добавляет до total через ksAddSheet().
    #     Если листов >= total, ничего не делает.
    #     (Не меняет формат, т.к. формат мы уже задали при ksCreateDocument в Kompas2D.)
    #     """
    #     # Текущий объект 2D-документа
    #     doc = self.doc2d.doc  
    #     if doc is None:
    #         raise RuntimeError("В 2D-документе self.doc2d.doc нет объекта Document2D.")

    #     # Если листов меньше, чем нужно — добавляем
    #     while existing_count < total:
    #         try:
    #             doc.ksAddSheet()    # добавляет новый пустой лист
    #         except Exception as e:
    #             raise RuntimeError(f"Ошибка при добавлении листа: {e}")
    #         existing_count += 1

    def build(self, data, output_cdw):
        pages = data.get("pages", [])
        total = len(pages)

        # 1) Устанавливаем нужное число листов (multiply)
        #    теперь в документе будет A3 × total листов подряд
        self.doc2d._sheet_param.multiply = total  # :contentReference[oaicite:0]{index=0} :contentReference[oaicite:1]{index=1}

        # 2) Рисуем всё на одном «длинном» листе, смещая контент по X на (idx-1)*420
        for idx, page in enumerate(pages, start=1):
            b = page["bounds"]
            vis_w = max(b["max_x"] - b["min_x"], 1)
            vis_h = max(b["max_y"] - b["min_y"], 1)
            usable_w = self.sheet_w - 2*self.margin
            usable_h = self.sheet_h - 2*self.margin
            # scale = min(usable_w/vis_w, usable_h/vis_h)
            scale = 1

            # cмещение: левый отступ + сдвиг на предыдущие листы (420 мм)
            off_x = self.margin - b["min_x"]*scale + (idx-1)*self.sheet_w
            off_y = self.margin - b["min_y"]*scale

            for shp in page["shapes"]:
                t = shp["type"]
                if t == "line":
                    x1 = shp["x1"]*scale + off_x
                    y1 = shp["y1"]*scale + off_y
                    x2 = shp["x2"]*scale + off_x
                    y2 = shp["y2"]*scale + off_y

                    x1, y1, x2, y2 = _smart_snap(x1, y1, x2, y2)

                    self.doc2d.line(x1, y1, x2, y2)
                elif t == "rectangle":
                    cx = shp["x"]*scale + off_x
                    cy = shp["y"]*scale + off_y
                    w  = shp["width"]*scale
                    h  = shp["height"]*scale
                    ang = shp.get("angle", 0.0)

                    w, h, ang = _smart_rect_dims(w, h, ang)

                    x0 = cx - w/2
                    y0 = cy - h/2

                    self.doc2d.rectangle(x0, y0, w, h, ang, center_flag=0, style=1)
                elif t == "circle":
                    self.doc2d.circle(
                        shp["cx"]*scale + off_x,
                        shp["cy"]*scale + off_y,
                        shp["radius"]*scale
                    )
                elif t == "text":
                    # исходные координаты и масштаб
                    x = shp["x"] * scale + off_x
                    y = shp["y"] * scale + off_y

                    # Новые поля из JSON
                    bbox_height = shp.get("height", 0.0) * scale       # общая высота текстового баунда (мм → единицы модели)
                    line_height = shp.get("font_height", 0.0) * scale  # вычисленная высота одной строки (мм → ед. модели)

                    angle    = shp.get("angle", 0.0)
                    style    = 1 if shp.get("italic", False) else 0
                    interval = 1.0  # множитель межстрочного интервала (можно взять из JSON, если нужно)

                    halign = shp.get("halign", "center")    # left/center/right
                    valign = shp.get("valign", "middle")    # top/middle/bottom
                    color  = shp.get("color", "#000000")
                    anchor = shp.get("anchor", "middle-center")
                    text   = shp.get("text", "")

                    # Передаём всё в метод Kompas2D.text,
                    # добавив два параметра — bbox_height и line_height
                    self.doc2d.text(
                        x,
                        y,
                        bbox_height,
                        line_height,
                        angle,
                        interval,
                        style,
                        text,
                        halign,
                        valign,
                        anchor,
                        color
                    )


        self.doc2d.save_and_close(output_cdw)
        self.kompas.quit()
        print("Сохранено:", output_cdw)

def build_kompas_from_structure(data, output_cdw):
    """
    Привычная точка входа для старого main.py:
    вызывает Builder.build(...)
    """
    Builder().build(data, output_cdw)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("json", help="Input JSON path")
    parser.add_argument("cdw", help="Output .cdw path")
    args = parser.parse_args()

    try:
        with open(args.json, "r", encoding="utf-8") as f:
            data = json.load(f)
    except Exception as e:
        print(f"Ошибка чтения JSON «{args.json}»: {e}", file=sys.stderr)
        sys.exit(1)

    builder = Builder()
    builder.build(data, args.cdw)