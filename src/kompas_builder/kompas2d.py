from .kompas_app import KompasApp
from kompas_builder.kompas5Constants import (
    ksDocumentParam,
    ksLineSegParam,
    ksRectangleParam,
    ksCircleParam,
    ksTextParam,
)

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

    def text(self, x, y, ht, angle, interval, style, text):
        self.doc.ksText(x, y, angle, ht, interval, style, text)
    
    def save_and_close(self, output_cwd):
        self.doc.ksSaveDocument(output_cwd)
        self.doc.ksCloseDocument()