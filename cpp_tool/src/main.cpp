#include "Builder.h"
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>


int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "Usage: KompasBuilder <input.json> <output.cdw>\n";
    return 1;
  }

  // Читаем JSON
  std::ifstream ifs(argv[1]);
  if (!ifs) {
    std::cerr << "Cannot open JSON: " << argv[1] << "\n";
    return 1;
  }
  nlohmann::json data;
  try {
    ifs >> data;
  } catch (const std::exception &e) {
    std::cerr << "JSON parse error: " << e.what() << "\n";
    return 1;
  }

  // Конвертируем путь к .cdw в wstring (ASCII → wide)
  std::string out = argv[2];
  std::wstring wout(out.begin(), out.end());

  // Строим чертёж
  try {
    Builder builder;
    builder.build(data, wout);
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }

  std::cout << "Saved: " << out << "\n";
  return 0;
}
