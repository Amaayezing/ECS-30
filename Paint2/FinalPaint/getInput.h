#ifndef GETCOMMAND_H
#define GETCOMMAND_H
#include "inputStruct.h"
#include <stdbool.h>
void runPaint(char **board, plottingPoints user, int *rowNum, int *colNum);
void checkInput(char userInput, char **board, plottingPoints user, int *rowNum, int *colNum, int numArgs);
void save(plottingPoints user, char **board, int *rowNum, int *colNum, char *file);
void deletePoint(plottingPoints user, int *rowNum, int *colNum, char **board);
void load(plottingPoints user, char ***board, int *rowNum, int *colNum, char *file);
void help();
bool checkValid(int numArgs, int argsRequired);
#endif
