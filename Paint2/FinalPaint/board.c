#include "inputStruct.h"
#include <stdio.h>
#include <stdlib.h>
#include "board.h"


char** createBoard(int *rowNum, int *colNum) {
      char** board = (char**)malloc(*rowNum * sizeof(char*));
      for (int i = 0; i < *rowNum; ++i) {
            board[i] = (char*)malloc(*colNum * sizeof(char));
            for (int z = 0; z < *colNum; ++z) {
                  board[i][z] = '*';
              }
        }
      return board;
}

void printBoard(char** board, int* rowNum, int* colNum) {
      for (int i = 0; i < *rowNum; ++i) {
            printf("%d ", *rowNum - i -1);
            for (int z = 0; z < *colNum; ++z) {
                  printf("%c ", board[i][z]);
              }
            printf("\n");
      }
      printf("  ");
      for (int z = 0; z < *colNum; ++z) {
            printf("%d ", z);
      }
      printf("\n");
}

void changeBoard(plottingPoints user, int *rowNum, int *colNum, char ***board) {
  char** array = (char**)malloc(user.xOne * sizeof(char*));
  for (int i = user.xOne - 1; i >= 0; --i) {
    array[i] = (char*)malloc(user.yOne * sizeof(char));
    for (int z = 0; z < user.yOne; ++z) {
      if ((user.xOne - i) > *rowNum) {
        array[i][z] = '*';
      } else if (z >= *colNum) {
        array[i][z] = '*';
      } else {
        array[i][z] = (*board)[*rowNum - (user.xOne - i)][z];
      }
    }
  }
  *board = (char**)realloc(*board, user.xOne * sizeof(char*));
  for (int i = 0; i < user.xOne; ++i) {
    (*board)[i] = (char*)realloc((*board)[i], user.yOne * sizeof(char));
  }

  for (int i = user.xOne - 1; i >= 0; --i) {
    for (int z = 0; z < user.yOne; ++z) {
      (*board)[i][z] = array[i][z];
    }
  }
  *rowNum = user.xOne;
  *colNum = user.yOne;
  printBoard(*board, rowNum, colNum);
}

void setUp(char*** board, int* rowNum, int* colNum) {
  *board = createBoard(rowNum, colNum);
}

void freeBoard(char** board, int* rowNum) {
  for (int i = 0; i < *rowNum; ++i) {
    free(board[i]);
  }
  free(board);
}
