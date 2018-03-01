//  turnInput.c
//  connectn.c
//  Takes in user input for piece location
//  Created by Sanjna Duvvur on 11/8/16.
//  Copyright © 2016 Sanjna Duvvur. All rights reserved.
//

#include <ctype.h>
#include <stdio.h>
#include "turnInput.h"


int getValidMove(char** board, int numCols){ //asks user for input
  int col;
  int numArgsRead;

  do{
    printf("Enter a column between 0 and %d to play in: ", numCols-1);
    numArgsRead = scanf("%d", &col);

  }while(!isValidMove(numArgsRead, 1, board, col, numCols));

  return col;
}

bool isValidMove(int numArgsRead, int numArgsNeeded, char** board, int col,int numCols){ /*checks if input is valid*/

  if(!isValidFormatting(numArgsRead, numArgsNeeded)){
    return false;
  }
  else if(!inBounds(col, numCols)){
    return false;
  }
  else if(board[0][col] != '*'){ //checks to see if column is full
    return false;
  }
  else{
    return true;
  }
}

bool isValidFormatting(int numArgsRead, int numArgsNeeded){ //checks for correct number of arguments in input
  char newLine = '\n';
  bool isValid = true; //assume the format is correct
  if(numArgsRead != numArgsNeeded){ //didn't fill in all the format specifiers
    isValid = false;//format is not correct
  }


  do{
    scanf("%c", &newLine); //read the next character from the standard input
    if(!isspace(newLine)){ //if it isn't white space
      isValid = false; //extra stuff there so format isn't valid
    }
  }while(newLine != '\n'); //keep reading characters until you reach the new line character
  return isValid;
}

bool inBounds(int col, int numCols){ //checks to if play is within the board
  return col >= 0 && col < numCols;
}
