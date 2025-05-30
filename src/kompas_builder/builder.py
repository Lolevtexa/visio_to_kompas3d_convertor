from .com_init import init_kompas5, init_kompas7
from .doc_setup import create_2d_document, format_sheets
from .drawing import draw_line, draw_rectangle, draw_circle, draw_arc, draw_text

def build_kompas_from_structure(data: dict, output_cdw: str):
    app5 = init_kompas5()
    doc2d = create_2d_document(app5)

    kompas7 = init_kompas7()
    sheets = format_sheets(kompas7, len(data.get("pages", [])))

    sheet_w, sheet_h, margin = 420.0, 297.0, 10.0

    for idx, page in enumerate(data.get("pages", [])):
        try:
            doc2d.ksOpenSheet(idx + 1)
        except:
            pass

        b = page["bounds"]
        vis_w, vis_h = (b["max_x"]-b["min_x"]) or 1, (b["max_y"]-b["min_y"]) or 1
        usable_w, usable_h = sheet_w-2*margin, sheet_h-2*margin
        scale = min(usable_w/vis_w, usable_h/vis_h)
        off_x = margin - b["min_x"]*scale
        off_y = margin - b["min_y"]*scale

        for shp in page["shapes"]:
            t = shp["type"]
            if t == "line":
                draw_line(doc2d, shp, scale, off_x, off_y)
            elif t == "circle":
                draw_circle(doc2d, shp, scale, off_x, off_y)
            elif t == "arc":
                draw_arc(doc2d, shp, scale, off_x, off_y)
            elif t == "text":
                draw_text(doc2d, shp, scale, off_x, off_y, bounds=page["bounds"])

    doc7 = kompas7.ActiveDocument
    doc7.SaveAs(output_cdw)
    print("Сохранено:", output_cdw)
    doc7.Close(0)

    kompas7.Quit()

    import pythoncom
    pythoncom.CoUninitialize()

if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument("json", help="Куда сохранить JSON")
    parser.add_argument("cdw", help="Path to output .cdw")
    args = parser.parse_args()

    import json, sys
    try:
        with open(args.json_path, "r", encoding="utf-8") as f:
            data = json.load(f)
    except Exception as e:
        print(f"Ошибка чтения JSON «{args.json_path}»: {e}", file=sys.stderr)
        sys.exit(1)
    build_kompas_from_structure(data, args.cdw)
