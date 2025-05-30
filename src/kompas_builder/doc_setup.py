def create_2d_document(app5):
    doc_param = app5.GetParamStruct(35)
    doc_param.Init()
    doc_param.type = 1  # A3
    doc2d = app5.Document2D
    doc2d.ksCreateDocument(doc_param)
    return doc2d

def format_sheets(doc7, total_pages):
    sheets = doc7.ActiveDocument.LayoutSheets
    # привести существующие
    for i in range(sheets.Count):
        sh = sheets.Item(i)
        sh.Format.Format = 3
        sh.Format.VerticalOrientation = False
        sh.Update()
    # добавить
    while sheets.Count < total_pages:
        sh = sheets.Add()
        sh.Format.Format = 3
        sh.Format.VerticalOrientation = False
        sh.Update()
    return sheets
