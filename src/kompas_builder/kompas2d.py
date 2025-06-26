from .kompas_app import KompasApp
from kompas_builder.kompas5Constants import (
    ksDocumentParam,
    ksLineSegParam,
    ksRectangleParam,
    ksCircleParam,
    ksTextParam,
    ksParagraphParam,
    ksTextLineParam,
    ksTextItemParam,
    ksTextItemFont,
)
from kompas_builder.dynamic_array_constants import (
    TEXT_ITEM_ARR, TEXT_LINE_ARR
)
import math

class Kompas2D:
    def __init__(self, kompas_app: KompasApp):
        self.app = kompas_app

        # Получаем параметры документа
        param = self.app.get_param_struct(ksDocumentParam)
        param.Init()
        param.type = 1  # стандартный лист

        # Берём параметры штампа и самого листа
        layout = param.GetLayoutParam()
        layout.shtType   = 1       # оформление первого листа
        sheet = layout.GetSheetParam()
        sheet.format     = 3       # 3 → A3
        sheet.direct     = True    # True → ландшафт
        sheet.multiply   = 1       # по умолчанию: 1 лист
        # Сохраняем, чтобы потом менять число листов
        self._sheet_param = sheet

        # Создаём документ
        self.doc = self.app.app5.Document2D
        self.doc.ksCreateDocument(param)

    def line(self, x1, y1, x2, y2, style=1):
        self.doc.ksLineSeg(x1, y1, x2, y2, style)

    def rectangle(self, x, y, w, h, angle=0.0, center_flag=0, style=1):
        p = self.app.get_param_struct(ksRectangleParam)
        p.Init()
        p.x, p.y, p.width, p.height, p.ang, p.style = x, y, w, h, angle, style
        self.doc.ksRectangle(p, center_flag)

    def circle(self, x, y, r, style=1):
        self.doc.ksCircle(x, y, r, style)

    def text(self,
            x, y,
            bbox_height,
            line_height,
            angle,
            interval,
            style,
            full_text,
            halign,
            valign,
            anchor,
            color):
        # 1) Параметры абзаца
        p_par = self.app.get_param_struct(ksParagraphParam)
        p_par.Init()
        p_par.x = x + (line_height/2) * math.sin(math.radians(angle))
        p_par.y = y - (line_height/2) * math.cos(math.radians(angle))
        p_par.ang     = angle
        p_par.style   = style

        # по горизонтали/вертикали
        p_par.hFormat = 0
        p_par.vFormat = -1

        # 2) Устанавливаем «прямоугольник» для текста
        #    — обязательно в «единицах модели» (мм*1000 для KOMПАС),
        #    здесь bbox_height уже приведён к нужным единицам
        p_par.height = int(bbox_height)
        # при необходимости можно задать ширину:
        # p_par.width = int(some_width)

        # 3) Межстрочный интервал:
        #    многие версии API понимают spacing между строками:
        try:
            # line_height — это высота строки в ед. модели,
            # interval — множитель (1.0 по умолчанию)
            p_par.LineSpacing = int(line_height * interval)
        except AttributeError:
            # если такой параметр недоступен — пропускаем
            pass

        # 4) Собираем массивы строк/символов
        arr_items = self.app.app5.GetDynamicArray(TEXT_ITEM_ARR)
        arr_items.ksClearArray()
        arr_lines = self.app.app5.GetDynamicArray(TEXT_LINE_ARR)
        arr_lines.ksClearArray()

        # цвет в int
        rgb = int(color.lstrip("#"), 16)

        # 5) Для каждого параграфа (в вашем случае — manual split по '\n')
        for line in full_text.split("\n"):
            itm = self.app.get_param_struct(ksTextItemParam)
            itm.Init()
            itm.s = line

            # 6) Шрифт: задаём цвет и размер
            font_p = self.app.get_param_struct(ksTextItemFont)
            font_p.Init()
            font_p.color = rgb

            # если хотим принудительно установить размер шрифта в пунктах:
            # font_height (единицы модели) → мм → pt
            # pt_size = (line_height / 1000.0) / 0.3527777778
            pt_size = (line_height)
            font_p.height  = pt_size  # или font_p.height = pt_size, смотря API

            itm.SetItemFont(font_p)

            arr_items.ksAddArrayItem(-1, itm)

            ln = self.app.get_param_struct(ksTextLineParam)
            ln.Init()
            ln.SetTextItemArr(arr_items)
            arr_lines.ksAddArrayItem(-1, ln)
            arr_items.ksClearArray()

        
        # 7) «Упаковка» и вывод
        txt = self.app.get_param_struct(ksTextParam)
        txt.Init()
        txt.SetParagraphParam(p_par)
        txt.SetTextLineArr(arr_lines)
        # тут 0 или 1 — зависит от нужного способа выравнивания
        text = self.doc.ksTextEx(txt, 1)
        self.doc.ksSetTextAlign(text, 1)
        # 8) Очистка массивов
        arr_items.ksDeleteArray()
        arr_lines.ksDeleteArray()

    def save_and_close(self, output_cwd):
        self.doc.ksSaveDocument(output_cwd)
        self.doc.ksCloseDocument()