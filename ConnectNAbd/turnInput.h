//  turnInput.h
//  connectn.c
//  Header file for turnInput.c
//  Created by Sanjna Duvvur on 11/8/16.
//  Copyright © 2016 Sanjna Duvvur. All rights reserved.
//
#ifndef TURNINPUT_H
#define TURNINPUT_H

#include <stdbool.h>
int getValidMove(char** board, int numCols);
bool isValidMove(int numArgsRead, int numArgsNeeded, char** board, int col,int numCols);
bool inBounds(int col, int numCols);
bool isValidFormatting(int numArgsRead, int numArgsNeeded);

#endif
