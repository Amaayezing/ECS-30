//
// Created by Abdullah Mohammed on 12/9/17.
//

#include "inputStruct.h"
#include "getInput.h"
#include "board.h"
#include "drawLines.h"
#include "add.h"
#include "delete.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


void runPaint(char** board, plottingPoints user, int* numRows, int* numCols) {
  char userInput;
  int numArgs;
  do {
    printf("Enter your command: ");
    numArgs = scanf(" %c", &userInput);
    checkInput(userInput, board, user, numRows, numCols, numArgs);
  } while (userInput != 'q');
}

void checkInput(char userInput, char** board, plottingPoints user, int* numRows, int* numCols, int numArgs) { // not finished with this function yet basically it has to do something for every command
  if (userInput == 'q') {
    if (!checkValid(numArgs, 1)) {
      printf("Unrecognized command. Type h for help.\n");
      printBoard(board, numRows, numCols);
      printf("Enter your command: ");
    }
    else {
      exit(0);
    }
  }
  else if (userInput == 'h') {
    if (!(checkValid(numArgs, 1))) {
      printf("Unrecognized command. Type h for help.\n");
      printBoard(board, numRows, numCols);
    }
    else {
      print_help();
      printBoard(board, numRows, numCols);
    }
  }
  else if (userInput == 'w') {
    numArgs = scanf("%d %d %d %d", &user.xOne, &user.yOne, &user.xTwo, &user.yTwo);
    if (!(checkValid(numArgs, 4))) {
      printf("Improper draw command.\n");
      printBoard(board, numRows, numCols);
    }
    else if ((user.xOne >= *numRows) || (user.xOne < 0) || (user.xTwo >= *numRows) || (user.xTwo < 0) ||
        (user.yOne >= *numCols) || (user.yOne < 0) || (user.yTwo >= *numCols) || (user.yTwo < 0)) {
      printf("Improper draw command.\n");
      printBoard(board, numRows, numCols);
    }
    else if (user.xOne == user.xTwo) {
      horizontal(user, board, numRows, numCols);
    }
    else if (user.yOne == user.yTwo) {
      vertical(user, board, numRows, numCols);
    }
    else if ((user.xTwo - user.xOne) / (user.yTwo - user.yOne) == 1) {
      leftDiagonal(user, board, numRows, numCols);
    }
    else if ((user.xTwo - user.xOne) / (user.yTwo - user.yOne) == -1) {
      rightDiagonal(user, board, numRows, numCols);
    }
    else if ((user.xTwo - user.xOne) / (user.yTwo - user.yOne) != 1) {
      printf("Cannot draw the line as it is not straight.\n");
      printBoard(board, numRows, numCols);
    }
  }
  else if (userInput == 'e') {
    scanf("%d %d", &user.xOne, &user.yOne);
    if ((user.xOne >= *numRows) || (user.yOne >= *numCols) || (user.xOne < 0) || (user.yOne < 0)) {
      printf("Improper erase command.\n");
      printBoard(board, numRows, numCols);
    }
    else {
      delete(user, numRows, numCols, board);
    }
  }
  else if (userInput == 'a') {
    char XY;
    numArgs = scanf(" %c %d", &XY, &user.xy);
    if (!(checkValid(numArgs, 2))) {
      printf("Improper add command.\n");
      printBoard(board, numRows, numCols);
    }
    else if (XY == 'r') {
      if ((user.xy > *numRows) || (user.xy < 0)) {
        printf("Improper add command.\n");
        printBoard(board, numRows, numCols);
      }
      else {
        *numRows += 1;
        addRow(user, &board, numRows, numCols);
      }
    }
    else if (XY == 'c') {
      if ((user.xy > *numCols) || (user.xy < 0)) {
        printf("Improper add command.\n");
        printBoard(board,numRows, numCols);
      }
      else {
        *numCols += 1;
        addCol(user, board, numRows, numCols);
      }
    }
  }
  else if (userInput == 'd') {
    char XY;
    numArgs = scanf(" %c %d", &XY, &user.xy);
    if (!(checkValid(numArgs, 2))) {
      printf("Improper delete command.\n");
      printBoard(board, numRows, numCols);
    }
    else if (XY == 'r') {
      if ((user.xy < 0) || (user.xy >= *numRows)) {
        printf("Improper delete command.\n");
        printBoard(board, numRows, numCols);
      }
      else {
        *numRows -= 1;
        deleteRow(user, &board, numRows, numCols);
      }
    }
    else if (XY == 'c') {
      if ((user.xy < 0) || (user.xy >= *numCols)) {
        printf("Improper delete command.\n");
        printBoard(board, numRows, numCols);
      }
      else {
        *numCols -= 1;
        deleteCol(user, board, numRows, numCols);
      }
    }
  }
  else if (userInput == 'r') {
    scanf("%d %d", &user.xOne, &user.yOne);
    if ((user.xOne < 1) || (user.yOne < 1)) {
      printf("Improper delete command.\n");
      printBoard(board, numRows, numCols);
    }
    else {
      changeBoard(user, &board, numRows, numCols);
    }
  }
  else if (userInput == 's') {
    char file[100];
    scanf("%s", file);
    save(user, board, numRows, numCols, file);
    printBoard(board, numRows, numCols);
  }
  else if (userInput == 'l') {
    char file[100];
    scanf("%s", file);
    load(user, &board, numRows, numCols, file);
  }
  printf("Unrecognized command. Type h for help.\n");
  printBoard(board, numRows, numCols);
}

void print_help(){
  printf("Commands:\n");
  printf("Help: h\n");
  printf("Quit: q\n");
  printf("Draw line: w row_start col_start row_end col_end\n");
  printf("Resize: r num_rows num_cols\n");
  printf("Add row or column: a [r | c] pos\n");
  printf("Delete row or column: d [r | c] pos\n");
  printf("Erase: e row col\n");
  printf("Save: s file_name\n");
  printf("Load: l file_name\n");
}

/*void errorMessage(int num) {
  if (num == 1) {
    printf("Improper draw command.\n");
  } else if (num == 2) {
    printf("Improper resize command.\n");
  } else if (num == 3) {
    printf("Improper erase command.\n");
  } else if (num == 4) {
    printf("Improper add command.\n");
  } else if (num == 5) {
    printf("Improper delete command.\n");
  } else if (num == 6) {
    printf("Improper save command or file could not be created.\n");
  } else if (num == 7) {
    printf("Improper load command or file could not be opened.\n");
  } else if (num == 8) {
    printf("Wrong number of command line arguments entered.\n");
  } else if (num == 9) {
    printf("Usage: ./paint.out [num_rows num_cols]\n");
  } else if (num == 10) {
    printf("Unrecognized command. Type h for help.\n");
  } else if (num == 11) {
    printf("The number of rows is not an integer.\n");
  } else if (num == 12) {
    printf("The number of rows is less than 1.\n");
  } else if (num == 13) {
    printf("The number of columns is not an integer.\n");
  } else if (num == 14) {
    printf("The number of columns is less than 1.\n");
  }
}*/

bool checkValid(int numArgs, int argsRequired) {
  bool isValid = true;
  char lastChar;

  if (numArgs != argsRequired) {
    isValid = false;
  }

  do {
    scanf("%c", &lastChar);
    if(lastChar != '\n') {
      isValid = false;
    }
  } while (lastChar != '\n');

  return isValid;
}

void load(plottingPoints user, char*** board, int* numRows, int* numCols, char file[]) {
  FILE* openedFile = NULL;
  int newRows;
  int newCols;
  openedFile = fopen(file, "r");
  if (openedFile == NULL) {
    printf("Failed to open file: %s\n", file);
    printBoard(*board, numRows, numCols);
  }
  else {
    fscanf(openedFile, "%d %d", &newRows, &newCols);
    *numRows = newRows;
    *numCols = newCols;
    *board = (char**)realloc(*board, *numRows * sizeof(char*));
    for (int i = 0; i < *numRows; ++i) {
      (*board)[i] = (char*)realloc((*board)[i], *numCols * sizeof(char));
      for (int z = 0; z < *numCols; ++z) {
        fscanf(openedFile, "%c", board[i][z]);
      }
    }
  }
  for (int i = 0; i < *numRows; ++i) {
    printf("%d ", *numRows - i - 1);
    for (int z = 0; z < *numCols; ++z) {
      printf("%c ", (*board)[i][z]);
    }
    printf("\n");
  }
  printf(" ");
  for (int z = 0; z < *numCols; ++z) {
    printf("%d ", z);
  }
  printf("\n");
  fclose(openedFile);
}

void save(plottingPoints user, char** board, int* numRows, int* numCols, char file[]) {
  FILE* openedFile = NULL;
  openedFile = fopen(file, "w");
  fprintf(openedFile, "%d %d", *numRows, *numCols);
  fprintf(openedFile, "\n");
  for (int i = 0; i < *numRows; ++i) {
    for (int z = 0; z < *numCols; ++z) {
      fprintf(openedFile, "%c ", board[i][z]);
    }
    fprintf(openedFile, "\n");
  }
  fclose(openedFile);
}

void delete(plottingPoints user, int* numRows, int* numCols, char** board) {
  board[*numRows - (user.xOne) - 1][user.yOne] = '*';
  printBoard(board, numRows, numCols);
}
