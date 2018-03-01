//  win.h
//  connectn.c
//  Header file for win.c
//  Created by Sanjna Duvvur on 11/9/16.
//  Copyright © 2016 Sanjna Duvvur. All rights reserved.
//

#ifndef WIN_H_INCLUDED
#define WIN_H_INCLUDED
#include <stdbool.h>

bool checkGameOver(char** board, int numRows, int numCols, int numToWin);
bool won(char** board, int numToWin, int numCols, int numRows);
bool horizWin(char** board, int numToWin, int numCols,int numRows);
bool vertWin(char** board, int numToWin, int numCols, int numRows);
bool diagWin(char** board, int numToWin, int numCols, int numRows);
bool leftDiagWin(char** board, int numToWin, int numCols, int numRows);
bool rightDiagWin(char** board, int numToWin, int numCols, int numRows);
bool tied(char** board, int numRows, int numCols, int numToWin);
bool checkBoardFull(char** board, int numRows, int numCols);

#endif
