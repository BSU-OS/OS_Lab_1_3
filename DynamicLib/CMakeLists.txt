cmake_minimum_required(VERSION 3.23)
project(DynamicLib)

set(CMAKE_CXX_STANDARD 14)
link_directories(../StaticLib/cmake-build-debug)
add_library(DynamicLib SHARED Vector2D.cpp Vector2D.h)
#target_link_libraries(DynamicLib LINK_PUBLIC StaticLib)
