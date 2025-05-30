import json
from .com_utils import init_visio_app, close_visio_app
from .shape_extractors import extract_shapes


def parse_visio_to_structure(vsd_path: str, json_path: str = None) -> dict:
    """
    Open a Visio .vsd file, extract shapes from all pages, compute bounds,
    and return a dict. Optionally write to JSON file.
    """
    app = init_visio_app(visible=False)
    doc = app.Documents.Open(vsd_path)

    pages_out = []
    for page in doc.Pages:
        bounds = {
            "min_x": float('inf'), "max_x": float('-inf'),
            "min_y": float('inf'), "max_y": float('-inf')
        }
        shapes_list: list[dict] = []

        for shape in page.Shapes:
            try:
                shapes_list.extend(extract_shapes(shape, bounds))
            except Exception:
                continue

        pages_out.append({
            "name": page.Name,
            "bounds": bounds,
            "shapes": shapes_list
        })

    # Clean up
    doc.Close()
    close_visio_app(app)

    result = {"pages": pages_out}
    if json_path:
        with open(json_path, "w", encoding="utf-8") as f:
            json.dump(result, f, indent=2, ensure_ascii=False)

    return result

if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument("vsd",  help="Путь к входному .vsd")
    parser.add_argument("--json", help="Куда сохранить JSON", default=None)
    args = parser.parse_args()

    data = parse_visio_to_structure(args.vsd, args.json)
    print(f"Обработано страниц: {len(data['pages'])} (JSON → {args.json or 'stdout'})")