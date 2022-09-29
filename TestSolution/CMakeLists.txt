cmake_minimum_required(VERSION 3.23)
project(TestSolution)

set(CMAKE_CXX_STANDARD 14)
link_directories(../DynamicLib/cmake-build-debug)
link_directories(../StaticLib/cmake-build-debug)
add_executable(TestSolution main.cpp)
target_link_libraries(TestSolution LINK_PUBLIC DynamicLib)
target_link_libraries(TestSolution LINK_PUBLIC StaticLib)