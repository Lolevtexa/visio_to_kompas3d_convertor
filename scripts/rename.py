import os
import shutil
import re

def copy_and_rename_files(src_folder: str, dst_folder: str):
    """
    Копирует файлы из src_folder в dst_folder, переименовывая их:
    в новом имени остаётся только текст от 'яч' до ')', плюс исходное расширение.
    """
    # Создаём папку назначения, если её нет
    os.makedirs(dst_folder, exist_ok=True)

    # Компилируем регулярное выражение: ищем 'яч' + любые символы, кроме ')' до первой встречи ')'
    pattern = re.compile(r"(яч[^)]*\))")

    for filename in os.listdir(src_folder):
        src_path = os.path.join(src_folder, filename)
        if not os.path.isfile(src_path):
            continue  # пропускаем подпапки и т.п.

        m = pattern.search(filename)
        if not m:
            print(f"Пропускаем «{filename}»: шаблон не найден")
            continue

        # Собираем новое имя: найденная группа + исходное расширение
        base = m.group(1)
        ext = os.path.splitext(filename)[1]
        new_name = base + ext

        dst_path = os.path.join(dst_folder, new_name)
        shutil.copy2(src_path, dst_path)
        print(f"Скопировано «{filename}» → «{new_name}»")

if __name__ == "__main__":
    src_folder = r"D:\Николаев\АВРИП-160 Схемы Марков"
    dst_folder = r"D:\Николаев\АВРИП-160 Схемы Марков\fff"

    copy_and_rename_files(src_folder, dst_folder)
