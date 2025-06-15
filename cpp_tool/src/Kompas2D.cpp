#include "Kompas2D.h"

Kompas2D::Kompas2D(KompasApp &a) : app(a) {
  // Создаём новый документ A3
  DocumentParamPtr p = app.getParamStruct(ksDocumentParam);
  p->Init();
  p->type = 1; // A3
  doc = app.getDocument2D();
  doc->ksCreateDocument(p, 0);
}

void Kompas2D::openSheet(int index) {
  try {
    doc->ksOpenSheet(index);
  } catch (...) {
  }
}

void Kompas2D::line(double x1, double y1, double x2, double y2, int style) {
  doc->ksLineSeg(x1, y1, x2, y2, style);
}

void Kompas2D::rectangle(double x, double y, double w, double h, double angle,
                         int centerFlag, int style) {
  DocumentParamPtr p = app.getParamStruct(ksRectangleParam);
  p->Init();
  p->x = x;
  p->y = y;
  p->width = w;
  p->height = h;
  p->ang = angle;
  p->style = style;
  doc->ksRectangle(p, centerFlag);
}

void Kompas2D::circle(double x, double y, double r, int style) {
  doc->ksCircle(x, y, r, style);
}

void Kompas2D::text(double x, double y, double ht, double angle,
                    double interval, int style, const std::wstring &txt) {
  _bstr_t btxt(txt.c_str());
  doc->ksText(x, y, angle, ht, interval, style, btxt);
}

void Kompas2D::saveAndClose(const std::wstring &path) {
  _bstr_t bpath(path.c_str());
  doc->ksSaveDocument(bpath);
  doc->ksCloseDocument();
}
