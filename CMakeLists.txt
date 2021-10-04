cmake_minimum_required(VERSION 3.15)

project(OurExcel)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(OurExcel)

add_subdirectory(OurExcel)
add_subdirectory(OurExcelTests)