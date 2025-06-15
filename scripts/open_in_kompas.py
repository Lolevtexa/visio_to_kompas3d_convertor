import sys
import pythoncom
from win32com.client import Dispatch

def open_cdw(path: str):
    # Инициализируем COM
    pythoncom.CoInitialize()
    # Получаем API7
    app7 = Dispatch("Kompas.Application.7")
    # Делаем видимым
    app7.Visible = True
    # Открываем файл через коллекцию Documents
    docs = app7.Documents
    # Open(pathName, Visible, ReadOnly)
    docs.Open(path, True, False)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: open_in_kompas.py <file.cdw>")
        sys.exit(1)
    open_cdw(sys.argv[1])
