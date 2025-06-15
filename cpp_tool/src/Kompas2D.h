#pragma once
#include "KompasApp.h"
#include "ksConstants.h" // ksDocumentParam, ksRectangleParam, ksCircleParam, ksTextParam…
#include "ldefin2D.h" // 2D-константы
#include <string>


class Kompas2D {
private:
  KompasApp &app;
  Document2DPtr doc;

public:
  explicit Kompas2D(KompasApp &app);

  void openSheet(int index);
  void line(double x1, double y1, double x2, double y2, int style = 1);
  void rectangle(double x, double y, double w, double h, double angle = 0.0,
                 int centerFlag = 0, int style = 1);
  void circle(double x, double y, double r, int style = 1);
  void text(double x, double y, double ht, double angle, double interval,
            int style, const std::wstring &txt);

  void saveAndClose(const std::wstring &path);
};
