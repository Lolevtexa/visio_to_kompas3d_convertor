MM_PER_INCH = 25.4

def to_mm(value_iu: float) -> float:
    """
    Convert Visio internal units (inches) to millimeters.
    """
    return value_iu * MM_PER_INCH


def update_bounds(bounds: dict, xs: list[float], ys: list[float]) -> None:
    """
    Update the bounds dict in-place given lists of x and y values.
    """
    bounds['min_x'] = min(bounds['min_x'], *xs)
    bounds['max_x'] = max(bounds['max_x'], *xs)
    bounds['min_y'] = min(bounds['min_y'], *ys)
    bounds['max_y'] = max(bounds['max_y'], *ys)
