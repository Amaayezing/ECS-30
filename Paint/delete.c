//
// Created by maaye on 12/13/2017.
//

#include "inputStruct.h"
#include "delete.h"
#include "getInput.h"
#include "board.h"
#include <stdio.h>
#include <stdlib.h>


void deleteCol(plottingPoints user, char** board, int* numRows, int* numCols) {
  for (int i = 0; i < *numRows; ++i) {
    for (int j = user.xy; j < *numCols; ++j) {
      board[i][j] = board[i][j + 1];
    }
  }
  for (int i = 0; i < *numRows; ++i) {
    board[i] = (char*)realloc(board[i], (*numCols) * sizeof(char));
  }
  printBoard(board, numRows, numCols);
}

void deleteRow(plottingPoints user, char*** board, int* numRows, int* numCols) {
  for (int i = *numRows - user.xy; i < *numRows; ++i) {
    for (int j = 0; j < *numCols; ++j) {
      (*board)[i][j] = (*board)[i + 1][j];
    }
  }
  *board = (char**)realloc(*board, *numRows * sizeof(char*));

  printBoard(*board, numRows, numCols);
}
