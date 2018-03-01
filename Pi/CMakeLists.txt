cmake_minimum_required(VERSION 3.8)
project(Pi)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES pi.c)
add_executable(Pi ${SOURCE_FILES})