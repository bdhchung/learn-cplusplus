cmake_minimum_required(VERSION 3.6.3)
project(cproject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Rectangle.cpp Rectangle.h Circle.cpp Circle.h control/do_while_loop.cpp control/for_loop.cpp function/example1.cpp function/defaul-value.cpp function/declare-function.cpp function/recursive.cpp)
add_executable(cproject ${SOURCE_FILES})