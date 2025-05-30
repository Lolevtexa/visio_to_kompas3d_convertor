import sys
import json
import math
import pythoncom
from win32com.client import Dispatch

def build_kompas_from_structure(data, output_cdw):
    # 1) COM и подключение к Компас-3D API5 (2D)
    pythoncom.CoInitialize()
    kompas5 = Dispatch("Kompas.Application.5")
    kompas5.Visible = False

    # 2) Создаём новый документ (лист A3)
    #    ko_DocumentParam = 35, lt_DocSheetStandart = 1
    doc_param = kompas5.GetParamStruct(35)
    doc_param.Init()
    doc_param.type = 1
    # Получаем объект листа и создаём документ
    doc2d = kompas5.Document2D
    doc2d.ksCreateDocument(doc_param)

    # 3) Через API7 настраиваем все листы в A3/альбом
    kompas7 = Dispatch("Kompas.Application.7")
    kompas7.Visible = False
    app7    = kompas7.Application
    doc7    = app7.ActiveDocument
    sheets  = doc7.LayoutSheets

    # Приводим существующие листы (обычно 1) к A3/альбом
    for i in range(sheets.Count):
        sh = sheets.Item(i)
        sh.Format.Format              = 3     # 3 == A3
        sh.Format.VerticalOrientation = False # False == альбом
        sh.Update()

    # Добавляем листы, если страниц больше одной
    total_pages = len(data.get("pages", []))
    while sheets.Count < total_pages:
        sh = sheets.Add()
        sh.Format.Format              = 3
        sh.Format.VerticalOrientation = False
        sh.Update()

    # 4) Параметры листа A3 и поле
    sheet_w, sheet_h = 420.0, 297.0
    margin = 10.0

    # 5) Рисуем страницы последовательно
    for page_idx, page in enumerate(data.get("pages", [])):
        # активируем лист (1-based)
        try:
            doc2d.ksOpenSheet(page_idx + 1)
        except Exception:
            pass

        # границы Visio-контента
        b = page.get("bounds", {})
        min_x, max_x = b.get("min_x",0.0), b.get("max_x",0.0)
        min_y, max_y = b.get("min_y",0.0), b.get("max_y",0.0)
        vis_w = max_x - min_x or 1.0
        vis_h = max_y - min_y or 1.0

        # вычисляем uniform scale и offset
        usable_w = sheet_w - 2*margin
        usable_h = sheet_h - 2*margin
        scale = min(usable_w/vis_w, usable_h/vis_h)
        off_x = margin - min_x*scale
        off_y = margin - min_y*scale

        # перебираем фигуры
        for shp in page.get("shapes", []):
            t = shp.get("type")
            if t == "line":
                x1 = shp["x1"]*scale + off_x
                y1 = shp["y1"]*scale + off_y
                x2 = shp["x2"]*scale + off_x
                y2 = shp["y2"]*scale + off_y
                doc2d.ksLineSeg(x1, y1, x2, y2, 1)

            elif t == "circle":
                cx = shp["cx"]*scale + off_x
                cy = shp["cy"]*scale + off_y
                r  = shp["radius"]*scale
                doc2d.ksCircle(cx, cy, r, 1)

            elif t == "text":
                tx  = shp["x"]*scale + off_x
                ty  = shp["y"]*scale + off_y
                ang = shp.get("angle", 0.0)
                ht  = 5.0 * scale
                bv  = 1 if shp.get("italic") else 0
                txt = shp["text"]
                doc2d.ksText(tx, ty, ang, ht, 1.0, bv, txt)

    # 6) Сохраняем результат
    doc7.SaveAs(output_cdw)
    print("Сохранено:", output_cdw)

# Пример использования (если запускать модуль отдельно):
if __name__ == "__main__":
    json_file = "D:/Документы/Work/АВРИП/Схемы/Convertor/Test/visio_data.json"
    cdw_file = "D:/Документы/Work/АВРИП/Схемы/Convertor/Test/kompas.cdw"

    import json
    with open(json_file, "r", encoding="utf-8") as f:
        data = json.load(f)
    build_kompas_from_structure(data, cdw_file)
