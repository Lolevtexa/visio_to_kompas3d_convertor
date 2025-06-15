import argparse, subprocess, tempfile, json
from visio_parser.parser import parse_visio_to_structure

def main():
    p = argparse.ArgumentParser()
    p.add_argument("vsd", help="входной Visio")
    p.add_argument("cdw", help="выходной CDW")
    args = p.parse_args()

    # 1) парсим Visio → dict структуры
    struct = parse_visio_to_structure(args.vsd)

    # 2) сохраняем во временный JSON
    with tempfile.NamedTemporaryFile(suffix=".json", delete=False) as tmp:
        json.dump(struct, tmp, ensure_ascii=False)
        tmp_path = tmp.name

    # 3) вызываем C++ утилиту
    subprocess.run([
        "build/cpp/kompas_builder",
        "--json", tmp_path,
        "--out",  args.cdw
    ], check=True)

    print("Готово:", args.cdw)

if __name__ == "__main__":
    main()
