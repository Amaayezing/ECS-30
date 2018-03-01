cmake_minimum_required(VERSION 3.8)
project(HelloWorld)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c)
add_executable(HelloWorld ${SOURCE_FILES})