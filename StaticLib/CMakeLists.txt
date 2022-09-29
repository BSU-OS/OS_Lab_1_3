cmake_minimum_required(VERSION 3.23)
project(StaticLib)

set(CMAKE_CXX_STANDARD 14)

add_library(StaticLib Number.cpp Number.h)
