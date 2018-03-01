//
// Created by maaye on 12/14/2017.
//

#include "inputStruct.h"
#include "drawLines.h"
#include "getInput.h"
#include "board.h"
#include <stdio.h>

void horizontal(plottingPoints user, char** board, int* numRows, int* numCols) {
  if(user.yOne < user.yTwo) {
    for(int i = user.yOne; i <= user.yTwo; ++i) {
      if((board[*numRows - user.xOne - 1][i]!= '*') && (board[*numRows - user.xOne - 1][i] != '-')) {
        board[*numRows - user.xOne - 1][i] = '+';
      }
      else {
        board[*numRows - user.xOne - 1][i] = '-';
      }
    }
  }
  else {
    for(int i = user.yTwo; i <= user.yOne; ++i) {
      if((board[*numRows - user.xOne - 1][i] != '*') && (board[*numRows - user.xOne - 1][i] != '-')) {
        board[*numRows - user.xOne - 1][i] = '+';
      }
      else {
        board[*numRows - user.xOne - 1][i] = '-';
      }
    }
  }
  printBoard(board, numRows, numCols);
}

void vertical(plottingPoints user, char** board, int* numRows, int* numCols) {
  if(user.xOne < user.xTwo) {
    for(int i = *numRows - user.xTwo - 1; i <= *numRows - user.xOne - 1; ++i) {
      if((board[i][user.yOne] != '*') && (board[i][user.yOne] != '|')) {
        board[i][user.yOne] = '+';
      }
      else {
        board[i][user.yOne] = '|';
      }
    }
  }
  else {
    for(int i = *numRows - user.yOne - 1; i <= *numRows - user.xTwo - 1; ++i) {
      if((board[i][user.yOne] != '*') && (board[i][user.yOne] != '|')) {
        board[i][user.yOne] = '+';
      }
      else {
        board[i][user.yOne] = '|';
      }
    }
  }
  printBoard(board, numRows, numCols);
}

void leftDiagonal(plottingPoints user, char** board, int* numRows, int* numCols) {
  if(user.xOne < user.xTwo) {
    int j = *numRows - user.xOne - 1;
    for(int i = user.yOne; i <= user.yTwo; ++i) {
      if((board[j][i] != '*') && (board[j][i] != '/')) {
        board[j][i] = '+';
      }
      else {
        board[j][i] = '/';
      }
      --j;
    }
  }
  else {
    int j = *numRows - user.xTwo - 1;
    for(int i = user.yTwo; i <= user.yOne; ++i) {
      if((board[j][i] != '*') && (board[j][i] != '/')) {
        board[j][i] = '+';
      }
      else {
        board[j][i] = '/';
      }
      --j;
    }
  }
  printBoard(board, numRows, numCols);
}

void rightDiagonal(plottingPoints user, char** board, int* numRows, int* numCols) {
  if(user.xOne < user.xTwo) {
    int j = *numRows - user.xTwo - 1;
    for(int i = user.yTwo; i <= user.yOne; ++i) {
      if((board[j][i] != '*') && (board[j][i] != '\\')) {
        board[j][i] = '+';
      }
      else {
        board[j][i] = '\\';
      }
      ++j;
    }
  }
  else {
    int j = *numRows - user.xOne - 1;
    for(int i = user.yOne; i <= user.yTwo; ++i) {
      if((board[j][i] != '*') && (board[j][i] != '\\')) {
        board[j][i] = '+';
      }
      else {
        board[j][i] = '\\';
      }
      ++j;
    }
  }
  printBoard(board, numRows, numCols);
}
