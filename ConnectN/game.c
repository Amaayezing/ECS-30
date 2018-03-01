//
// Created by Maayez Imam on 11/10/2017.
//

#include "game.h"

bool checkGameOver(char** board, int numRows, int numCols, int numToWin) {
      return won(board, numToWin, numCols, numRows) || tied(board, numRows, numCols, numToWin);
  }

bool won(char** board, int numToWin, int numCols, int numRows) {
      return horizWin(board, numToWin, numCols, numRows) || vertWin(board, numToWin, numCols, numRows) || diagWin(board, numToWin, numCols, numRows);
  }

bool horizWin(char** board, int numToWin, int numCols, int numRows) {
      int i, j, k;
      bool winner;
      char firstPiece;

      for(i = 0; i < numRows; ++i) {
            for (j = 0; j < numCols - numToWin + 1; ++j) {
                  winner = true;
                  firstPiece = board[i][j];
                  if(firstPiece == '*') {
                        continue;
                    }
                  for (k = 0; k < numToWin; ++k) {
                        if(firstPiece != board[i][j+k]) {
                              winner = false;
                              break;
                          }
                    }
                  if (winner) {
                        return true;
                    }
              }
        }
      return false;
  }

bool vertWin(char** board, int numToWin, int numCols, int numRows) {
      int i, j, k;
      bool winner;
      char firstPiece;

      for(i = 0; i < numCols; ++i) {
           for (j = 0; j < numRows - numToWin + 1; ++j) {
                  winner = true;
                  firstPiece = board[j][i];
                  if(firstPiece == '*') {
                        continue;
                    }
                  for (k = 0; k < numToWin; ++k) {
                        if(firstPiece != board[j+k][i]) {
                              winner = false;
                              break;
                          }
                    }
                  if (winner) {
                        return true;
                    }
             }
        }
      return false;
  }

bool diagWin(char** board, int numToWin, int numCols, int numRows) {
      return leftDiagWin(board, numToWin, numCols, numRows) || rightDiagWin(board, numToWin, numCols, numRows);

  }


bool leftDiagWin(char** board, int numToWin, int numCols, int numRows) {
      int i, j, k;
      bool winner;
      char firstPiece;

      for(i = 0; i < numRows - numToWin + 1; ++i) {
            for (j = 0; j < numCols - numToWin + 1; ++j) {
                  winner = true;
                  firstPiece = board[i][j];
                  if(firstPiece == '*') {
                        continue;
                    }
                  for (k = 0; k < numToWin; ++k) {
                        if(firstPiece != board[i+k][j+k]) {
                              winner = false;
                              break;
                          }
                    }
                  if (winner) {
                        return true;
                    }
              }
        }
      return false;
  }

bool rightDiagWin(char** board, int numToWin, int numCols, int numRows) {
      int i, j, k;
      bool winner;
      char firstPiece;

      for(i = numRows - 1; i >= numRows - numToWin + 1; --i) {
            for (j = 0; j < numCols - numToWin + 1; ++j) {
                  winner = true;
                  firstPiece = board[i][j];
                  if(firstPiece == '*') {
                        continue;
                    }
                  for (k = 0; k < numToWin; ++k) {
                        if(firstPiece != board[i-k][j+k]) {
                              winner = false;
                              break;
                          }
                    }
                  if (winner) {
                        return true;
                    }
              }
        }
      return false;
  }

bool tied(char** board, int numRows, int numCols, int numToWin) {
      return checkBoardFull(board, numRows, numCols) && !won(board, numToWin, numCols, numRows);
  }

bool checkBoardFull(char** board, int numRows, int numCols) {
      int i, j;

      for(i = 0; i < numRows; ++i) {
            for(j = 0; j < numCols; ++j) {
                  if(board[i][j] == '*') {
                        return false;
                    }
              }
        }
      return true;
  }
