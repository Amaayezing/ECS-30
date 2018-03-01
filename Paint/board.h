//
// Created by Abdullah Mohammed on 12/9/17.
//

#ifndef PAINT_BOARD_H
#define PAINT_BOARD_H
#include "inputStruct.h"
char** createBoard(int* numRows, int* numCols);
void printBoard(char** board, int* numRows, int* numCols);
void setUp(char*** board, int* numRows, int* numCols);
void clearBoard(char** board, int* numRows);
void changeBoard(plottingPoints user, char*** board, int* numRows, int* numCols);
#endif //PAINT_BOARD_H