//
// Created by Abdullah Mohammed on 12/9/17.
//

#include "inputStruct.h"
#include <stdio.h>
#include <stdlib.h>
#include "board.h"

char** createBoard(int* numRows, int* numCols) {
  char** board = (char**)malloc(*numRows * sizeof(char*));

  for (int i = 0; i < *numRows; ++i) {
    board[i] = (char*)malloc(*numCols*sizeof(char));
    for (int z = 0; z < *numCols; ++z) {
      board[i][z] = '*';
    }
  }

  return board;
}

void clearBoard(char** board, int* numRows) {
  for(int i = 0; i < *numRows; ++i) {
    free(board[i]);
  }
  free(board);
}

void printBoard(char** board, int* numRows, int* numCols) {
  for(int i = 0; i < *numRows; ++i) {
    printf("%d ", *numRows - i - 1);
    for(int z = 0; z < *numCols; ++z){
      printf("%c ", board[i][z]);
    }
    printf("\n");
  }

  printf("  ");

  for(int z = 0; z < *numCols; ++z){
    printf("%d ", z);
  }
  printf("\n");
}

void setUp(char*** board, int* numRows, int* numCols) {
  *board = createBoard(numRows, numCols);
}

void changeBoard(plottingPoints user, char*** board, int* numRows, int* numCols) {
  char** array = (char**)malloc(user.xOne * sizeof(char*));

  for(int i = user.xOne - 1; i >= 0; --i) {
    array[i] = (char*)malloc(user.yOne * sizeof(char));
    for(int j = 0; j < user.yOne; ++j) {
      if((user.xOne - i) > *numRows) {
        array[i][j] = '*';
      }
      else if(j >= *numCols) {
        array[i][j] = '*';
      }
      else {
        array[i][j] = *board[*numRows - (user.xOne - i)][j];
      }
    }
  }
  *board = (char**)realloc(*board, user.xOne * sizeof(char*));
  for(int i = 0; i < user.xOne; ++i) {
    (*board)[i] = (char*)realloc((*board)[i], user.yOne * sizeof(char));
  }
  for(int i = user.xOne - 1; i >= 0; --i) {
    for(int j = 0; j < user.yOne; ++j) {
      (*board)[i][j] = array[i][j];
    }
  }
  *numRows = user.xOne;
  *numCols = user.yOne;
  printBoard(*board, numRows, numCols);
}


