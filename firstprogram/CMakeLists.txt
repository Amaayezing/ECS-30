cmake_minimum_required(VERSION 3.8)
project(firstprogram)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c)
add_executable(firstprogram ${SOURCE_FILES})