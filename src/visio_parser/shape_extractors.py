import math
from .utils import to_mm, update_bounds

def extract_shapes(shape, bounds: dict) -> list[dict]:
    """
    Given a Visio shape COM object and a bounds dict, return a list of
    shape dictionaries (line, circle, rectangle, text) and update bounds.
    Теперь с поддержкой вложенных (групповых) фигур и корректным извлечением текста.
    """
    shapes_out: list[dict] = []

    # Если это группа — рекурсивно обрабатываем всех потомков
    try:
        subshapes = getattr(shape, "Shapes", None)
        if subshapes and subshapes.Count > 0:
            for i in range(1, subshapes.Count + 1):
                sub = subshapes.Item(i)
                shapes_out.extend(extract_shapes(sub, bounds))
    except Exception:
        pass  # не группа — идём дальше

    one_d = getattr(shape, "OneD", False)

    # Попробуем получить текст через Characters.Text, fallback на shape.Text
    text = ""
    if hasattr(shape, "Characters"):
        try:
            text = shape.Characters.Text or ""
        except Exception:
            text = ""
    if not text:
        # иногда бывает, что Text нет, или пусто
        text = getattr(shape, "Text", "") or ""
    text = text.strip()

    # Core geometry
    px = to_mm(shape.CellsU("PinX").ResultIU)
    py = to_mm(shape.CellsU("PinY").ResultIU)
    w  = to_mm(shape.CellsU("Width").ResultIU)
    h  = to_mm(shape.CellsU("Height").ResultIU)
    ang = math.degrees(shape.CellsU("Angle").ResultIU)

    # 1) Линия
    if one_d:
        x1 = to_mm(shape.CellsU("BeginX").ResultIU)
        y1 = to_mm(shape.CellsU("BeginY").ResultIU)
        x2 = to_mm(shape.CellsU("EndX").ResultIU)
        y2 = to_mm(shape.CellsU("EndY").ResultIU)
        shapes_out.append({
            "type": "line", "x1": x1, "y1": y1,
            "x2": x2, "y2": y2
        })
        update_bounds(bounds, [x1, x2], [y1, y2])

    # 2) Круг (ширина≈высота)
    elif abs(w - h) < 1e-3:
        r = w / 2.0
        shapes_out.append({
            "type": "circle", "cx": px, "cy": py,
            "radius": r
        })
        update_bounds(bounds, [px - r, px + r], [py - r, py + r])

    # 3) Прямоугольник
    else:
        shapes_out.append({
            "type": "rectangle", "x": px, "y": py,
            "width": w, "height": h, "angle": ang
        })
        half_w, half_h = w / 2.0, h / 2.0
        update_bounds(bounds, [px - half_w, px + half_w], [py - half_h, py + half_h])

    # 4) Текст поверх фигуры
    if text:
        # italic
        try:
            italic_flag = bool(shape.CellsU("Char.Italic").ResultIU)
        except Exception:
            italic_flag = False

        # выравнивание параграфа
        try:
            align_code = int(shape.CellsU("Para.HorzAlign").ResultIU)
            align_map = {0: "left", 1: "center", 2: "right"}
            align = align_map.get(align_code, "center")
        except Exception:
            align = "center"

        # цвет
        try:
            color_val = int(shape.CellsU("Char.Color").ResultIU) & 0xFFFFFF
            color = f"#{color_val:06X}"
        except Exception:
            color = "#000000"

        shapes_out.append({
            "type":   "text",
            "x":      px, "y": py,
            "angle":  ang,
            "text":   text,
            "italic": italic_flag,
            "align":  align,
            "color":  color,
            # anchor можно тоже взять из shape.CellsU("Para.VertAlign") и т.д.
            "anchor": "inside",
        })
        update_bounds(bounds, [px], [py])

    return shapes_out
