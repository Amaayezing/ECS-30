//
// Created by maaye on 12/13/2017.
//

#include "add.h"
#include "inputStruct.h"
#include "getInput.h"
#include "board.h"
#include <stdio.h>
#include <stdlib.h>


void addCol (plottingPoints user, char** board, int* numRows, int* numCols) {
  for (int i  = 0; i < *numRows; ++i) {
    board[i] = (char*)realloc(board[i], *numCols * sizeof(char));
  }
  for (int i = 0; i < *numRows; ++i) {
    for (int j = *numCols - 1; j > user.xy; --j) {
      board[i][j] = board[i][j - 1];
    }
    board[i][user.xy] = '*';
  }
  printBoard(board, numRows, numCols);
}

void addRow (plottingPoints user, char*** board, int* numRows, int* numCols) {
  *board = (char**)realloc(*board, *numRows * sizeof(char*));
  (*board)[*numRows - 1] = (char*)realloc((*board)[*numRows - 1], *numCols * sizeof(char));

  for (int i = *numRows - 1; i > *numRows - user.xy - 1; --i) {
    for (int j = 0; j < *numCols; ++j) {
      *board[i][j] = *board[i - 1][j];
    }
  }
  for (int i = 0; i < *numCols; ++i) {
    *board[*numRows - user.xy - 1][i] = '*';
  }
  printBoard(*board, numRows, numCols);
}

