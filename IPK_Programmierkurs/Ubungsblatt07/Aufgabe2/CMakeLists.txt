cmake_minimum_required(VERSION 3.5)

project(shapes)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-g -Wall")

add_library(canvaslib point.cc canvas.cc pgm.cc)

add_executable(main plot.cc point.cc canvas.cc pgm.cc)
target_link_libraries(main PUBLIC canvaslib)

enable_testing()

add_executable(canvastest testcorners.cc)
target_link_libraries(canvastest PUBLIC canvaslib)
add_test(NAME canvastest COMMAND test)


