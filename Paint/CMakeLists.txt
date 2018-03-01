cmake_minimum_required(VERSION 3.8)
project(Paint)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c add.c add.h board.c board.h delete.c delete.h drawLines.c drawLines.h getInput.c getInput.h inputStruct.h)
add_executable(Paint ${SOURCE_FILES} inputStruct.h)