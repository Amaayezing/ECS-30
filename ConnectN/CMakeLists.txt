cmake_minimum_required(VERSION 3.8)
project(ConnectN)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c turn.c turn.h board.h game.h board.c game.c)
add_executable(ConnectN ${SOURCE_FILES})