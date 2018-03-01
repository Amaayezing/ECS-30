cmake_minimum_required(VERSION 3.8)
project(Investments)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES investments.c)
add_executable(Investments ${SOURCE_FILES})