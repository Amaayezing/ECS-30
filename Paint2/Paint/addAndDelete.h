#ifndef ADDROWCOL_H
#define ADDROWCOL_H
#include "inputStruct.h"
void addCol(plottingPoints user, char** board, int *rowNum, int *colNum);
void addRow(plottingPoints user, char*** board, int* rowNum, int* colNum);
void deleteCol(plottingPoints user, char** board, int *rowNum, int *colNum);
void deleteRow(plottingPoints user, char*** board, int* rowNum, int* colNum);
#endif /* addRowCol_c */
