#include "Builder.h"
#include <algorithm>
#include <iostream>

Builder::Builder() : kompas(), doc2D(kompas) {}

void Builder::build(const nlohmann::json &data,
                    const std::wstring &outputPath) {
  auto pages = data.at("pages");
  for (size_t i = 0; i < pages.size(); ++i) {
    doc2D.openSheet(int(i + 1));
    auto b = pages[i].at("bounds");
    double minX = b.at("min_x"), minY = b.at("min_y");
    double maxX = b.at("max_x"), maxY = b.at("max_y");
    double visW = (maxX - minX) != 0 ? (maxX - minX) : 1.0;
    double visH = (maxY - minY) != 0 ? (maxY - minY) : 1.0;
    double usableW = sheetW - 2 * margin;
    double usableH = sheetH - 2 * margin;
    double scale = std::min(usableW / visW, usableH / visH);
    double offX = margin - minX * scale;
    double offY = margin - minY * scale;

    for (auto &shp : pages[i].at("shapes")) {
      std::string t = shp.at("type");
      if (t == "line") {
        doc2D.line(shp.at("x1").get<double>() * scale + offX,
                   shp.at("y1").get<double>() * scale + offY,
                   shp.at("x2").get<double>() * scale + offX,
                   shp.at("y2").get<double>() * scale + offY);
      } else if (t == "rectangle") {
        doc2D.rectangle(shp.at("x").get<double>() * scale + offX,
                        shp.at("y").get<double>() * scale + offY,
                        shp.at("width").get<double>() * scale,
                        shp.at("height").get<double>() * scale,
                        shp.value("angle", 0.0), 0, 1);
      } else if (t == "circle") {
        doc2D.circle(shp.at("cx").get<double>() * scale + offX,
                     shp.at("cy").get<double>() * scale + offY,
                     shp.at("radius").get<double>() * scale);
      } else if (t == "text") {
        std::wstring wtxt(shp.at("text").get<std::string>().begin(),
                          shp.at("text").get<std::string>().end());
        doc2D.text(shp.at("x").get<double>() * scale + offX,
                   shp.at("y").get<double>() * scale + offY, 5.0 * scale,
                   shp.value("angle", 0.0), 1.0,
                   shp.value("italic", false) ? 1 : 0, wtxt);
      }
    }
  }

  doc2D.saveAndClose(outputPath);
}
