//
// Created by Abdullah Mohammed on 12/9/17.
//

#ifndef PAINT_GETINPUT_H
#define PAINT_GETINPUT_H
#include "inputStruct.h"
#include <stdbool.h>
bool checkValid(int numArgs, int argsRequired);
void runPaint(char** board, plottingPoints user, int* numRows, int* numCols);
void print_help();
void checkInput(char userInput, char** board, plottingPoints user, int* numRows, int* numCols, int numArgs)
//void errorMessage(int num);
//void quit(char** board, int* numRows);
    void save(plottingPoints user, char** board, int* numRows, int* numCols, char file[]);
    void load(plottingPoints user, char*** board, int* numRows, int* numCols, char file[]);
    void delete(plottingPoints user, int* numRows, int* numCols, char** board);

//QUIT FUNCTION
#endif //PAINT_GETINPUT_H

