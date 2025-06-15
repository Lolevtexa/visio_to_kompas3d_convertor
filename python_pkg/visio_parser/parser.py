# parser.py
import json
from math import inf
from vsdx import VisioFile  # библиотека для чтения .vsdx без Visio
from .utils import to_mm, update_bounds

def parse_visio_to_structure(vsdx_path: str, json_path: str = None) -> dict:
    """
    Читает .vsdx-файл, перебирает страницы и фигуры (включая вложенные).
    Если при попытке получить shape.bounds возникает AttributeError или bounds == None, фигура пропускается.
    Собирает линии (connectors), круги, прямоугольники, текст.
    Возвращает структуру вида {"pages": [...]}. При желании сохраняет в JSON.
    """
    pages_out = []

    with VisioFile(vsdx_path) as vis:
        for page in vis.pages:
            # Инициализируем пустой bounding box
            bounds = {
                "min_x": float('inf'), "max_x": float('-inf'),
                "min_y": float('inf'), "max_y": float('-inf')
            }
            shapes_list = []

            for shape in page.all_shapes:
                # Попробуем получить координаты фигуры. Если что-то не так — пропустим.
                try:
                    b = shape.bounds  # может бросить AttributeError или вернуть None
                except AttributeError:
                    continue

                if b is None:
                    continue

                left, bottom, right, top = b

                # Переводим в миллиметры и сразу обновляем общий bounding box
                x_vals = [ to_mm(left),  to_mm(right) ]
                y_vals = [ to_mm(bottom), to_mm(top)   ]
                update_bounds(bounds, x_vals, y_vals)

                # --- 1) Соединитель (connector) ---
                if getattr(shape, "begin_x", None) is not None:
                    x1 = to_mm(shape.begin_x)
                    y1 = to_mm(shape.begin_y)
                    x2 = to_mm(shape.end_x)
                    y2 = to_mm(shape.end_y)
                    shapes_list.append({
                        "type": "line",
                        "x1": x1, "y1": y1,
                        "x2": x2, "y2": y2
                    })
                    update_bounds(bounds, [x1, x2], [y1, y2])

                # --- 2) Круг (circle) ---
                elif getattr(shape, "media", None) and shape.media.circle:
                    cx = to_mm((left + right) / 2.0)
                    cy = to_mm((bottom + top) / 2.0)
                    r  = to_mm((right - left) / 2.0)
                    shapes_list.append({
                        "type": "circle",
                        "cx": cx, "cy": cy,
                        "radius": r
                    })
                    update_bounds(bounds, [cx - r, cx + r], [cy - r, cy + r])

                # --- 3) Прямоугольник (rectangle) ---
                elif getattr(shape, "media", None) and shape.media.rectangle:
                    px     = to_mm((left + right) / 2.0)
                    py     = to_mm((bottom + top) / 2.0)
                    width  = to_mm(right - left)
                    height = to_mm(top - bottom)
                    angle  = getattr(shape, "angle", 0.0) * (180.0 / 3.141592653589793)

                    shapes_list.append({
                        "type":   "rectangle",
                        "x":      px, "y": py,
                        "width":  width, "height": height,
                        "angle":  angle
                    })
                    half_w, half_h = width / 2.0, height / 2.0
                    update_bounds(bounds,
                                  [px - half_w, px + half_w],
                                  [py - half_h, py + half_h])

                # --- 4) Текст (text) ---
                # Проверяем: если у фигуры есть текст (внутренний String), то shape.text возвращает строку.
                text_content = getattr(shape, "text", "")
                if text_content:
                    content = text_content.strip()
                    if content:
                        # Координаты текста — центр bounding-box фигуры
                        px = to_mm((left + right) / 2.0)
                        py = to_mm((bottom + top) / 2.0)
                        angle = getattr(shape, "angle", 0.0) * (180.0 / 3.141592653589793)

                        italic_flag = getattr(shape, "font_italic", False)
                        align       = getattr(shape, "text_align", "center")
                        color       = getattr(shape, "text_color", "#000000")

                        shapes_list.append({
                            "type":   "text",
                            "x":      px, "y": py,
                            "angle":  angle,
                            "text":   content,
                            "italic": italic_flag,
                            "align":  align,
                            "color":  color,
                            "anchor": "inside"
                        })
                        update_bounds(bounds, [px], [py])

            pages_out.append({
                "name":   page.name,
                "bounds": bounds,
                "shapes": shapes_list
            })

    result = {"pages": pages_out}
    if json_path:
        with open(json_path, "w", encoding="utf-8") as f:
            json.dump(result, f, indent=2, ensure_ascii=False)

    return result


if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument("vsdx",  help="Путь к входному .vsdx")
    parser.add_argument("--json", help="Куда сохранить JSON", default=None)
    args = parser.parse_args()

    data = parse_visio_to_structure(args.vsdx, args.json)
    print(f"Обработано страниц: {len(data['pages'])} (JSON → {args.json or 'stdout'})")
