#pragma once
#include "Kompas2D.h"
#include "KompasApp.h"
#include <nlohmann/json.hpp>
#include <string>


class Builder {
private:
  KompasApp kompas;
  Kompas2D doc2D;
  const double sheetW = 420.0;
  const double sheetH = 297.0;
  const double margin = 10.0;

public:
  Builder();

  /// data: parsed JSON, outputPath – полный путь к .cdw (широкая строка)
  void build(const nlohmann::json &data, const std::wstring &outputPath);
};
