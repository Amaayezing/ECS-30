cmake_minimum_required(VERSION 3.8)
project(Conversions)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES conversions.c)
add_executable(Conversions ${SOURCE_FILES})