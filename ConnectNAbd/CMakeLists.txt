cmake_minimum_required(VERSION 3.8)
project(ConnectNAbd)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c board.c board.h turnInput.c turnInput.h win.c win.h)
add_executable(ConnectNAbd ${SOURCE_FILES} board.c board.h turnInput.c turnInput.h win.c win.h)