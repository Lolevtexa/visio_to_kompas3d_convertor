def draw_line(doc2d, shp, scale, off_x, off_y):
    x1 = shp["x1"]*scale + off_x
    y1 = shp["y1"]*scale + off_y
    x2 = shp["x2"]*scale + off_x
    y2 = shp["y2"]*scale + off_y
    doc2d.ksLineSeg(x1, y1, x2, y2, 1)

def draw_circle(doc2d, shp, scale, off_x, off_y):
    cx = shp["cx"]*scale + off_x
    cy = shp["cy"]*scale + off_y
    r  = shp["radius"]*scale
    doc2d.ksCircle(cx, cy, r, 1)

def draw_arc(doc2d, shp, scale, off_x, off_y):
    cx  = shp["cx"]     * scale + off_x
    cy  = shp["cy"]     * scale + off_y
    r   = shp["radius"] * scale
    beg = shp["beg"]
    end = shp["end"]
    # последний параметр — тип сегмента (1 = отрезок-дуга)
    doc2d.ksArc(cx, cy, r, beg, end, 1)

def draw_text(doc2d, shp, scale, off_x, off_y, bounds=None):
    """
    Шп: {
      type:"text", x, y, angle, italic, text,
      align: "left"|"center"|"right",
      anchor: "inside"|"outside"
    }
    bounds: {"min_x","max_x","min_y","max_y"} в мм (до масштабирования)
    """
    # базовая позиция
    x = shp["x"] * scale + off_x
    y = shp["y"] * scale + off_y

    # размеры текста
    ht = 5.0 * scale
    bv = 1 if shp.get("italic", False) else 0

    align  = shp.get("align", "center")
    anchor = shp.get("anchor", "inside")

    if bounds:
        # пересчитаем границы страницы/фигуры в координаты
        min_x = bounds["min_x"] * scale + off_x
        max_x = bounds["max_x"] * scale + off_x
        min_y = bounds["min_y"] * scale + off_y
        max_y = bounds["max_y"] * scale + off_y

        if anchor == "outside":
            # выводим текст над верхней границей фигуры с отступом = ht
            y = max_y + ht
            if align == "left":
                x = min_x
            elif align == "right":
                x = max_x
            else:  # center
                x = (min_x + max_x) / 2

        else:  # anchor == "inside"
            # подвинем текст влево/вправо внутри рамки, отступ = ht/2
            if align == "left":
                x = min_x + ht/2
            elif align == "right":
                x = max_x - ht/2
            # для center — оставляем x как есть (он уже центр)
    # если bounds не передали — используем x,y без правок

    doc2d.ksText(
        x, y,
        shp.get("angle", 0.0),
        ht,        # размер текста
        1.0,       # межстрочный интервал (1.0)
        bv,        # вертикальное выравнивание (курсив)
        shp["text"]
    )