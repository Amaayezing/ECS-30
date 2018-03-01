cmake_minimum_required(VERSION 3.8)
project(PascalTriangle)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES pascal.c)
add_executable(PascalTriangle ${SOURCE_FILES})