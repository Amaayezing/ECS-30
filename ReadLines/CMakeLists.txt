cmake_minimum_required(VERSION 3.8)
project(ReadLines)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES read_lines.c read_lines.h)
add_executable(ReadLines ${SOURCE_FILES} read_lines.h)