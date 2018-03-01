//
// Created by Maayez Imam on 11/10/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include "board.h"

void setUp(char*** board, int *turn, int numRows, int numCols) {
      *board = makeBoard(numRows, numCols);
      *turn = 0;
  }

char** makeBoard(int numRows, int numCols) {

      char** board = (char**)malloc(numRows * sizeof(char*));
      int i, j;

      for(i = 0; i < numRows; ++i) {
            board[i] = (char*)malloc(numCols*sizeof(char));
            for(j = 0; j < numCols; ++j){
                  board[i][j] = '*';
              }
        }
      return board;
  }

void printBoard(char** board, int numRows, int numCols) {
      int i,j;

      for(i = 0; i < numRows; ++i) {
            printf("%d ", numRows - i -1);
            for(j = 0; j < numCols; ++j){
                  printf("%c ", board[i][j]);
              }
            printf("\n");
        }

      printf("  ");
      for(j = 0; j < numCols; ++j) {
            printf("%d ", j);
        }
      printf("\n");
  }


void cleanUpBoard(char** board, int numRows) {
      int i;
      for(i = 0; i < numRows; ++i) {
            free(board[i]);
        }
      free(board);
  }
