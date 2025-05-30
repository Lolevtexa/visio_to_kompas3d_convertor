import os
import json
import math
import pythoncom
import win32com.client


def parse_visio_full(vsd_path, json_path=None):
    pythoncom.CoInitialize()
    visio = win32com.client.Dispatch("Visio.Application")
    visio.Visible = False
    doc = visio.Documents.Open(vsd_path)

    pages_out = []

    for page in doc.Pages:
        shapes_out = []
        min_x, max_x = float('inf'), float('-inf')
        min_y, max_y = float('inf'), float('-inf')

        for shape in page.Shapes:
            try:
                one_d = shape.OneD
                text = shape.Text.strip()

                px = shape.CellsU("PinX").ResultIU * 25.4
                py = shape.CellsU("PinY").ResultIU * 25.4
                w  = shape.CellsU("Width").ResultIU * 25.4
                h  = shape.CellsU("Height").ResultIU * 25.4
                ang = math.degrees(shape.CellsU("Angle").ResultIU)

                # Линия (1D)
                if one_d:
                    x1 = shape.CellsU("BeginX").ResultIU * 25.4
                    y1 = shape.CellsU("BeginY").ResultIU * 25.4
                    x2 = shape.CellsU("EndX").ResultIU * 25.4
                    y2 = shape.CellsU("EndY").ResultIU * 25.4
                    shapes_out.append({"type":"line","x1":x1,"y1":y1,"x2":x2,"y2":y2})
                    min_x, max_x = min(min_x, x1, x2), max(max_x, x1, x2)
                    min_y, max_y = min(min_y, y1, y2), max(max_y, y1, y2)

                # Окружность
                elif abs(w - h) < 1.0:
                    shapes_out.append({"type":"circle","cx":px,"cy":py,"radius":w/2})
                    min_x, max_x = min(min_x, px - w/2), max(max_x, px + w/2)
                    min_y, max_y = min(min_y, py - h/2), max(max_y, py + h/2)

                # Прямоугольник
                else:
                    shapes_out.append({
                        "type": "rectangle",
                        "x": px, "y": py,
                        "width": w, "height": h,
                        "angle": ang
                    })
                    min_x, max_x = min(min_x, px - w/2), max(max_x, px + w/2)
                    min_y, max_y = min(min_y, py - h/2), max(max_y, py + h/2)

                # Текст — отдельно (даже если уже есть)
                if text:
                    shapes_out.append({
                        "type": "text",
                        "x": px, "y": py,
                        "angle": ang,
                        "text": text,
                        "italic": False  # можно доработать
                    })
                    min_x, max_x = min(min_x, px), max(max_x, px)
                    min_y, max_y = min(min_y, py), max(max_y, py)

            except Exception:
                continue

        pages_out.append({
            "name": page.Name,
            "bounds": {
                "min_x": min_x, "max_x": max_x,
                "min_y": min_y, "max_y": max_y
            },
            "shapes": shapes_out
        })

    doc.Close()
    visio.Quit()

    result = {"pages": pages_out}

    if json_path:
        with open(json_path, "w", encoding="utf-8") as f:
            json.dump(result, f, indent=2, ensure_ascii=False)

    return result


if __name__ == "__main__":
    # Тестовый запуск (замени на путь к своему .vsd)
    vsd_file = "D:/Документы/Work/АВРИП/Схемы/Convertor/test/input.vsd"         # путь к входному Visio файлу
    json_file = "D:/Документы/Work/АВРИП/Схемы/Convertor/Test/visio_data.json"
    parse_visio_full(vsd_file, json_file)
