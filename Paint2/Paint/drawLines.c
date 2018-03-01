#include "inputStruct.h"
#include "drawLines.h"
#include "getInput.h"
#include "board.h"
#include <stdio.h>


void vertical(plottingPoints user, char **board, int *rowNum, int *colNum) {
    if (user.xOne < user.xTwo) {
        for (int i = *rowNum - (user.xTwo) - 1; i <= *rowNum - (user.xOne) - 1; ++i) {
            if ((board[i][user.yOne] != '|') && (board[i][user.yOne] != '*')) {
                board[i][user.yOne] = '+';
            } else {
                board[i][user.yOne] = '|';
            }
        }
    } else {
        for (int i = *rowNum - (user.xOne) - 1; i <= *rowNum - (user.xTwo) - 1; ++i) {
            if ((board[i][user.yOne] != '|') && (board[i][user.yOne] != '*')){
                board[i][user.yOne] = '+';
            } else {
                board[i][user.yOne] = '|';
            }
        }
    }
    printBoard(board, rowNum, colNum);
}

void horizontal(plottingPoints user, char **board, int *rowNum, int *colNum) {
  if (user.yOne < user.yTwo) {
    for (int i = user.yOne; i <= user.yTwo; ++i) {
      if ((board[*rowNum - user.xOne - 1][i] != '-') && (board[*rowNum - user.xOne - 1][i] != '*')) {
        board[*rowNum - user.xOne - 1][i] = '+';
      } else {
        board[*rowNum - user.xOne - 1][i] = '-';
      }
    }
  } else {
    for (int i = user.yTwo; i <= user.yOne; ++i) {
      if ((board[*rowNum - user.xOne - 1][i] != '-') && (board[*rowNum - user.xOne - 1][i] != '*')) {
        board[*rowNum - user.xOne - 1][i] = '+';
      } else {
        board[*rowNum - user.xOne - 1][i] = '-';
      }
    }
  }
  printBoard(board, rowNum, colNum);
}


void rightDiagonal(plottingPoints user, char **board, int *rowNum, int *colNum) {
    if (user.xOne < user.xTwo) {
        int z = *rowNum - (user.xTwo) - 1;
        for (int i = user.yTwo; i <= user.yOne; ++i) {
            if((board[z][i] != '\\') && (board[z][i] != '*')) {
                board[z][i] = '+';
            } else {
                board[z][i] = '\\';
            }
            ++z;
        }
    } else {
        int z = *rowNum - (user.xOne) -  1;
        for(int i = user.yOne; i <= user.yTwo; ++i) {
            if((board[z][i] != '*')&&(board[z][i] != '\\')) {
                board[z][i] = '+';
            } else {
                board[z][i] = '\\';
            }
            ++z;
        }
    }
    printBoard(board, rowNum, colNum);
}

void leftDiagonal(plottingPoints user, char **board, int *rowNum, int *colNum) {
  if (user.xOne < user.xTwo) {
    int z = *rowNum - (user.xOne) - 1;
    for (int i = user.yOne; i <= user.yTwo; ++i) {
      if ((board[z][i] != '/') && (board[z][i] != '*')){
        board[z][i] = '+';
      } else {
        board[z][i] = '/';
      }
      --z;
    }
  } else {
    int z = *rowNum - (user.xTwo) -  1;
    for (int i = user.yTwo; i <= user.yOne; ++i) {
      if ((board[z][i] != '/') && (board[z][i] != '*')){
        board[z][i] = '+';
      } else {
        board[z][i] = '/';
      }
      --z;
    }
  }
  printBoard(board, rowNum, colNum);
}
