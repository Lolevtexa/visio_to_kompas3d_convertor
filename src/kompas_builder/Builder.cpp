#include "Builder.h"
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include <algorithm>

using json = nlohmann::json;

Builder::Builder(const std::string& sdkPath)
    : sdk(sdkPath), doc(sdk)
{
    if (!sdk.initialized()) {
        std::cerr << "Ошибка инициализации Kompas SDK\n";
        std::exit(1);
    }
    if (!doc.isValid()) {
        std::cerr << "Не удалось создать 2D-документ\n";
        std::exit(1);
    }
}

bool Builder::build(const std::string& inputJson, const std::string& outputCdw) {
    std::ifstream in(inputJson);
    if (!in) {
        std::cerr << "Не удалось открыть JSON-файл: " << inputJson << "\n";
        return false;
    }

    json data; in >> data;
    const auto& pages = data.value("pages", json::array());
    int pageIdx = 1;

    for (const auto& page : pages) {
        doc.openSheet(pageIdx++);
        auto b = page["bounds"];
        double minX = b["min_x"].get<double>(), minY = b["min_y"].get<double>();
        double maxX = b["max_x"].get<double>(), maxY = b["max_y"].get<double>();

        double visW = (maxX - minX) != 0 ? (maxX - minX) : 1.0;
        double visH = (maxY - minY) != 0 ? (maxY - minY) : 1.0;
        double usableW = sheetW - 2*margin, usableH = sheetH - 2*margin;
        double scale = std::min(usableW/visW, usableH/visH);
        double offX = margin - minX*scale, offY = margin - minY*scale;

        for (const auto& shp : page["shapes"]) {
            std::string t = shp["type"].get<std::string>();
            if (t == "line") {
                doc.line(
                    shp["x1"].get<double>()*scale + offX,
                    shp["y1"].get<double>()*scale + offY,
                    shp["x2"].get<double>()*scale + offX,
                    shp["y2"].get<double>()*scale + offY
                );
            }
            else if (t == "rectangle") {
                doc.rectangle(
                    shp["x"].get<double>()*scale + offX,
                    shp["y"].get<double>()*scale + offY,
                    shp["width"].get<double>()*scale,
                    shp["height"].get<double>()*scale,
                    shp.value("angle", 0.0)
                );
            }
            else if (t == "circle") {
                doc.circle(
                    shp["cx"].get<double>()*scale + offX,
                    shp["cy"].get<double>()*scale + offY,
                    shp["radius"].get<double>()*scale
                );
            }
            else if (t == "text") {
                doc.text(
                    shp["x"].get<double>()*scale + offX,
                    shp["y"].get<double>()*scale + offY,
                    shp["text"].get<std::string>(),
                    5.0 * scale,
                    shp.value("angle", 0.0),
                    1.0,
                    shp.value("italic", false) ? 1 : 0
                );
            }
        }
    }

    if (!doc.saveAndClose(outputCdw)) {
        std::cerr << "Ошибка сохранения: " << outputCdw << "\n";
        return false;
    }
    std::cout << "Сохранено: " << outputCdw << "\n";
    return true;
}