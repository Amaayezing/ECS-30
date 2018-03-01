//  win.c
//  main.c
//  Checks board to see if a player has one or if there is a tie
//  Created by Sanjna Duvvur on 11/9/16.
//  Copyright © 2016 Sanjna Duvvur. All rights reserved.
//

#include "win.h"

bool checkGameOver(char** board, int numRows, int numCols, int numToWin){ /*checks if a player has won or has a tie*/
  return won(board, numToWin, numCols, numRows) || tied(board, numRows, numCols, numToWin);
}

bool won(char** board, int numToWin, int numCols, int numRows){ //checks for a win
  return horizWin(board, numToWin, numCols, numRows) || vertWin(board, numToWin, numCols, numRows) || diagWin(board, numToWin, numCols, numRows);
}

bool horizWin(char** board, int numToWin, int numCols, int numRows){ //checks for horizontal win
  int i, j, k;
  bool winner;
  char firstPiece;

  for(i = 0; i < numRows; ++i){
    for (j = 0; j < numCols - numToWin + 1; ++j){
      winner = true;
      firstPiece = board[i][j]; //checks for first character that is not a *
      if(firstPiece == '*'){
        continue;
      }
      for (k = 0; k < numToWin; ++k){
        if(firstPiece != board[i][j+k]){ //checks if pieces match horizontally
          winner = false;
          break;
        }
      }
      if (winner){
        return true;
      }
    }
  }
  return false;
}

bool vertWin(char** board, int numToWin, int numCols, int numRows){ //checks for vertical win
  int i, j, k;
  bool winner;
  char firstPiece;

  for(i = 0; i < numCols; ++i){
    for (j = 0; j < numRows - numToWin + 1; ++j){
      winner = true;
      firstPiece = board[j][i];
      if(firstPiece == '*'){
        continue;
      }
      for (k = 0; k < numToWin; ++k){
        if(firstPiece != board[j+k][i]){ //checks if pieces match vertically
          winner = false;
          break;
        }
      }
      if (winner){
        return true;
      }
    }
  }
  return false;
}

bool diagWin(char** board, int numToWin, int numCols, int numRows){ //checks for a diagonal win
  return leftDiagWin(board, numToWin, numCols, numRows) || rightDiagWin(board, numToWin, numCols, numRows);

}


bool leftDiagWin(char** board, int numToWin, int numCols, int numRows){ //checks for a win from top left to bottom right
  int i, j, k;
  bool winner;
  char firstPiece;

  for(i = 0; i < numRows - numToWin + 1; ++i){
    for (j = 0; j < numCols - numToWin + 1; ++j){
      winner = true;
      firstPiece = board[i][j];
      if(firstPiece == '*'){
        continue;
      }
      for (k = 0; k < numToWin; ++k){
        if(firstPiece != board[i+k][j+k]){ //checks pieces diaganol from starting piece
          winner = false;
          break;
        }
      }
      if (winner){
        return true;
      }
    }
  }
  return false;
}

bool rightDiagWin(char** board, int numToWin, int numCols, int numRows){ //checks for a win from bottom left to top right
  int i, j, k;
  bool winner;
  char firstPiece;

  for(i = numRows - 1; i >= numRows - numToWin + 1; --i){
    for (j = 0; j < numCols - numToWin + 1; ++j){
      winner = true;
      firstPiece = board[i][j];
      if(firstPiece == '*'){
        continue;
      }
      for (k = 0; k < numToWin; ++k){
        if(firstPiece != board[i-k][j+k]){ //checks pieces diaganol from starting piece
          winner = false;
          break;
        }
      }
      if (winner){
        return true;
      }
    }
  }
  return false;
}

bool tied(char** board, int numRows, int numCols, int numToWin){ //checks for tie
  return checkBoardFull(board, numRows, numCols) && !won(board, numToWin, numCols, numRows);
}

bool checkBoardFull(char** board, int numRows, int numCols){ //checks if board is full
  int i, j;

  for(i = 0; i < numRows; ++i){
    for(j = 0; j < numCols; ++j){
      if(board[i][j] == '*'){ //checks if there are any remaining *s
        return false;
      }
    }
  }
  return true;
}

