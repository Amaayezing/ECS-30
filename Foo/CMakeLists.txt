cmake_minimum_required(VERSION 3.8)
project(Foo)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES foo.c)
add_executable(Foo ${SOURCE_FILES})