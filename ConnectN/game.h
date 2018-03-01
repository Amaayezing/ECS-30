//
// Created by Maayez Imam on 11/10/2017.
//
#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
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

