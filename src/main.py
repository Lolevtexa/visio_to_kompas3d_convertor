import argparse
from visio_parser.parser import parse_visio_to_structure
from kompas_builder.builder import build_kompas_from_structure

def main():
    p = argparse.ArgumentParser()
    p.add_argument("vsd", help="Path to input .vsd")
    p.add_argument("cdw", help="Path to output .cdw")
    p.add_argument("--json", help="(Optional) dump intermediate JSON", default=None)
    args = p.parse_args()

    data = parse_visio_to_structure(args.vsd, args.json)
    build_kompas_from_structure(data, args.cdw)

if __name__ == "__main__":
    main()
