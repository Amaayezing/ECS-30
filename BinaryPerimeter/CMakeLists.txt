cmake_minimum_required(VERSION 3.8)
project(BinaryPerimeter)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES perimeter.c)
add_executable(BinaryPerimeter ${SOURCE_FILES})