#include <iostream>
#include "Builder.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: kompas_builder <input.json> <output.cdw>\n";
        return 1;
    }
    Builder builder("C:/Program Files/ASCON/KOMPAS-3D v21/SDK/");
    if (!builder.build(argv[1], argv[2])) {
        return 1;
    }
    return 0;
}