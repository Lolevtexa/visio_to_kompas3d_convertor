import os
from visio_parser.parser import parse_visio_to_structure
from kompas_builder.builder_batch import build_kompas_from_structure

def main():
    src_folder = r"D:\Николаев\Новая папка"
    dst_folder = r"D:\Николаев\Новая папка (2)"
    for filename in os.listdir(src_folder):
        src_path = os.path.join(src_folder, filename)
        dst_path = os.path.join(dst_folder, filename)
        data = parse_visio_to_structure(src_path)
        build_kompas_from_structure(data, dst_path)

if __name__ == "__main__":
    main()
