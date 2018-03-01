cmake_minimum_required(VERSION 3.8)
project(MatrixAddition)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES mat_add.c)
add_executable(MatrixAddition ${SOURCE_FILES})