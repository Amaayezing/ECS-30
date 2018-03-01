#ifndef PAINTBOARD_H
#define PAINTBOARD_H
#include "inputStruct.h"
char** createBoard(int *rowNum, int *colNum);
void printBoard(char** board, int* rowNum, int* colNum);
void changeBoard(plottingPoints user, int *rowNum, int *colNum, char*** board);
void setUp(char*** board, int* rowNum, int* colNum);
#endif
