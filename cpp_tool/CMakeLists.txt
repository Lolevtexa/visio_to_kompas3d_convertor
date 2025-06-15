cmake_minimum_required(VERSION 3.10)
project(kompas_builder_cli LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT DEFINED CMAKE_C_COMPILER)
  set(CMAKE_C_COMPILER   x86_64-w64-mingw32-gcc CACHE STRING "" FORCE)
  set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++ CACHE STRING "" FORCE)
endif()

# Пусть у вас json.hpp лежит в external/nlohmann_json/include
include_directories(${CMAKE_SOURCE_DIR}/../external/nlohmann_json/include)

# Нам нужны COM-библиотеки
find_package(Threads REQUIRED)

add_executable(kompas_builder
    src/KompasCom.h
    src/Builder.cpp
    src/main.cpp
)

# COM требует эти библиотеки
target_link_libraries(kompas_builder
    PRIVATE
      ole32
      oleaut32
)

# Куда положить .exe
set_target_properties(kompas_builder PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/../build
)
