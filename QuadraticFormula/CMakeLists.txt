cmake_minimum_required(VERSION 3.8)
project(QuadraticFormula)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES quad.c)
add_executable(QuadraticFormula ${SOURCE_FILES})