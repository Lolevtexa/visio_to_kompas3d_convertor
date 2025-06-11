import json
import sys
import argparse
from .kompas_app import KompasApp
from .kompas2d import Kompas2D

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
        # self.format_sheets(len(pages))

        for idx, page in enumerate(pages, start=1):
            self.doc2d.open_sheet(idx)
            b = page["bounds"]
            vis_w = (b["max_x"] - b["min_x"]) or 1
            vis_h = (b["max_y"] - b["min_y"]) or 1
            usable_w = self.sheet_w - 2*self.margin
            usable_h = self.sheet_h - 2*self.margin
            scale = min(usable_w/vis_w, usable_h/vis_h)
            off_x = self.margin - b["min_x"]*scale
            off_y = self.margin - b["min_y"]*scale

            for shp in page["shapes"]:
                t = shp["type"]
                if t == "line":
                    self.doc2d.line(
                        shp["x1"]*scale + off_x,
                        shp["y1"]*scale + off_y,
                        shp["x2"]*scale + off_x,
                        shp["y2"]*scale + off_y
                    )
                elif t == "rectangle":
                    self.doc2d.rectangle(
                        shp["x"]*scale + off_x,
                        shp["y"]*scale + off_y,
                        shp["width"]*scale,
                        shp["height"]*scale,
                        shp.get("angle", 0.0),
                        center_flag=0
                    )
                elif t == "circle":
                    self.doc2d.circle(
                        shp["cx"]*scale + off_x,
                        shp["cy"]*scale + off_y,
                        shp["radius"]*scale
                    )
                elif t == "text":
                    # text handling similar to previous
                    x = shp["x"]*scale + off_x
                    y = shp["y"]*scale + off_y
                    ht = 5.0 * scale
                    style = 1 if shp.get("italic", False) else 0
                    self.doc2d.text(x, y, ht,
                                   shp.get("angle", 0.0),
                                   1.0, style,
                                   shp["text"])

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