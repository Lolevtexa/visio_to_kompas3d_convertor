import json
from math import inf, pi
import re
from vsdx import VisioFile
from .utils import to_mm, update_bounds

def get_font_size_from_shape(shape, default_pt=10.0):
    try:
        # CellsU понимает универсальные имена ячеек Visio, в том числе "Char.Size"
        cell = shape.CellsU("Char.Size")
        return float(cell.ResultIU)  # в пунктах
    except Exception:
        return default_pt

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
                elif getattr(shape, "width", None) is not None and getattr(shape, "height", None) is not None:
                    # размеры в исходных единицах
                    raw_w = right  - left
                    raw_h = top    - bottom

                    # 1) оба размера нулевые → пропускаем объект
                    if abs(raw_w) < 1e-6 and abs(raw_h) < 1e-6:
                        continue

                    # 2) один из размеров нулевой → это линия  
                    if abs(raw_h) < 1e-6:
                        # горизонтальная линия от (left, top) до (right, top)
                        x1 = to_mm(left)
                        y1 = to_mm(top)
                        x2 = to_mm(right)
                        y2 = to_mm(top)
                        shapes_list.append({
                            "type": "line",
                            "x1": x1, "y1": y1,
                            "x2": x2, "y2": y2
                        })
                        update_bounds(bounds, [x1, x2], [y1, y2])
                        continue
                    if abs(raw_w) < 1e-6:
                        # вертикальная линия от (left, bottom) до (left, top)
                        x1 = to_mm(left)
                        y1 = to_mm(bottom)
                        x2 = to_mm(left)
                        y2 = to_mm(top)
                        shapes_list.append({
                            "type": "line",
                            "x1": x1, "y1": y1,
                            "x2": x2, "y2": y2
                        })
                        update_bounds(bounds, [x1, x2], [y1, y2])
                        continue

                    # 3) обычный прямоугольник
                    px     = to_mm((left + right) / 2.0)
                    py     = to_mm((bottom + top) / 2.0)
                    width  = to_mm(raw_w)
                    height = to_mm(raw_h)
                    angle  = getattr(shape, "angle", 0.0) * (180.0 / pi)

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
                        # 2) Центр баунда и угол
                        px    = to_mm((left + right) / 2.0)
                        py    = to_mm((bottom + top) / 2.0)
                        bbox_height= to_mm(top - bottom)
                        angle = getattr(shape, "angle", 0.0) * (180.0 / pi)

                        # lines = content.split('\n')
                        # n_lines = len(lines)
                        # line_spacing_factor = 1.2
                        # font_height = bbox_height / (((n_lines - 1) * line_spacing_factor) + 1)
                        # pt_size = get_font_size_from_shape(shape)
                        # font_height = pt_size * 0.3527777778
                        # font_height = pt_size * 0.25
                        font_height = 3.5

                        # 3) Итальик-флаг
                        italic = bool(getattr(shape, "font_italic", False))

                        # 4) Цвет (HEX #RGB или #RRGGBB)
                        raw_color = getattr(shape, "text_color", "#000000")
                        if not isinstance(raw_color, str):
                            color = "#000000"
                        elif re.match(r"^#(?:[0-9A-Fa-f]{3}){1,2}$", raw_color):
                            color = raw_color
                        else:
                            color = "#000000"

                        # 5) Выравнивание внутри баунда
                        halign = getattr(shape, "text_align", "center").lower()
                        # вертикальное выравнивание, если есть
                        valign = getattr(shape, "text_valign", "middle").lower()

                        # 6) Крепление (anchor) к краям баунда
                        # возможные варианты: top/middle/bottom + left/center/right
                        anchor = f"{valign}-{halign}"

                        shapes_list.append({
                            "type":         "text",
                            "x":            px,
                            "y":            py,
                            "angle":        angle,
                            "text":         content,
                            "italic":       italic,
                            "color":        color,
                            "halign":       halign,
                            "valign":       valign,
                            "anchor":       anchor,
                            "height":       bbox_height,
                            "font_height":  font_height
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
