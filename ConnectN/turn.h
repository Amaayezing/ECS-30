//
// Created by Maayez Imam on 11/10/2017.
//
#ifndef TURN_H
#define TURN_H

#include <stdbool.h>
int getValidMove(char** board, int numCols);
bool isValidMove(int numArgsRead, int numArgsNeeded, char** board, int col,int numCols);
bool inBounds(int col, int numCols);
bool isValidFormatting(int numArgsRead, int numArgsNeeded);

#endif

