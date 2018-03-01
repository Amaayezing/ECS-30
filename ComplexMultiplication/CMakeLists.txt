cmake_minimum_required(VERSION 3.8)
project(ComplexMultiplication)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES complex_mult.c)
add_executable(ComplexMultiplication ${SOURCE_FILES})