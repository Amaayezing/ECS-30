//  board.c
//  connectn.c
//  Creates and prints board based on user input
//  Created by Sanjna Duvvur on 11/8/16.
//  Copyright © 2016 Sanjna Duvvur. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "board.h"

void setUp(char*** board, int *turn, int numRows, int numCols){
  *board = makeBoard(numRows, numCols);
  *turn = 0;
}

char** makeBoard(int numRows, int numCols){ //creates array for board based on user-input dimensions

  char** board = (char**)malloc(numRows * sizeof(char*));
  int i, j;

  for(i = 0; i < numRows; ++i){ //increments to add * to array until approriate size board is made
    board[i] = (char*)malloc(numCols*sizeof(char));
    for(j = 0; j < numCols; ++j){
      board[i][j] = '*';
    }
  }
  return board;
}

void printBoard(char** board, int numRows, int numCols){ //prints out created board
  int i,j;

  for(i = 0; i < numRows; ++i){
    printf("%d ", numRows - i -1);
    for(j = 0; j < numCols; ++j){
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }

  printf("  ");
  for(j = 0; j < numCols; ++j){
    printf("%d ", j);
  }
  printf("\n");
}


void cleanUpBoard(char** board, int numRows){ //frees up array for board
  int i;
  for(i = 0; i < numRows; ++i){
    free(board[i]);
  }
  free(board);
}

