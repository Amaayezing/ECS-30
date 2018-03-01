#include "inputStruct.h"
#include "getInput.h"
#include "board.h"
#include "drawLines.h"
#include "addAndDelete.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void runPaint(char **board, plottingPoints user, int *rowNum, int *colNum) {
      char userInput;
      int numArgs;
      do {
            printf("Enter your command: ");
            numArgs = scanf(" %c", &userInput);
            checkInput(userInput, board, user, rowNum, colNum, numArgs);
        } while (userInput != 'q');
}

void checkInput(char userInput, char **board, plottingPoints user, int *rowNum, int *colNum, int numArgs) {
      if (userInput == 'q') {
            if (!checkValid(numArgs, 1)) {
                  printf("Unrecognized command. Type h for help.\n");
                  printBoard(board, rowNum, colNum);
                  printf("Enter your command: ");
            } else {
              exit(0);
            }
        } else if (userInput == 'h') {
            if (!(checkValid(numArgs, 1))) {
                  printf("Unrecognized command. Type h for help.\n");
                  printBoard(board, rowNum, colNum);
            } else {
              help();
              printBoard(board, rowNum, colNum);
            }
        } else if (userInput == 'w') {
            numArgs = scanf("%d %d %d %d", &user.xOne, &user.yOne, &user.xTwo, &user.yTwo);
            if (!(checkValid(numArgs, 4))) {
                  printf("Improper draw command.\n");
                  printBoard(board, rowNum, colNum);
              } else if ((user.xOne >= *rowNum) || (user.yOne >= *colNum) || (user.xTwo >= *rowNum) || (user.yTwo >= *colNum) || (user.xOne < 0) || (user.yOne < 0) || (user.xTwo < 0) || (user.yTwo < 0)) {
                  printf("Improper draw command.\n");
                  printBoard(board, rowNum, colNum);
              } else if (user.xOne == user.xTwo) {
                  horizontal(user, board, rowNum, colNum);
              } else if (user.yOne == user.yTwo) {
                  vertical(user, board, rowNum, colNum);
              } else if ((user.xTwo - user.xOne) / (user.yTwo - user.yOne) == 1) {
                  leftDiagonal(user, board, rowNum, colNum);
              } else if ((user.xTwo - user.xOne) / (user.yTwo - user.yOne) == -1) {
                  rightDiagonal(user, board, rowNum, colNum);
              } else if (((user.xTwo - user.xOne) / (user.yTwo - user.yOne) != 1) || (user.xTwo - user.xOne) / (user.yTwo - user.yOne) != -1) {
                  printf("Cannot draw the line as it is not straight.\n");
                  printBoard(board, rowNum, colNum);
              }
        } else if (userInput == 'e') {
            scanf("%d %d", &user.xOne, &user.yOne);
            if ((user.xOne >= *rowNum) || (user.xOne < 0) || (user.yOne >= *colNum) || (user.yOne < 0)) {
                  printf("Improper erase command.\n");
                  printBoard(board, rowNum, colNum);
            } else {
              deletePoint(user, rowNum, colNum, board);
            }
        } else if (userInput == 'a') {
            char XY;
            numArgs = scanf(" %c %d", &XY, &user.xy);
            if (!(checkValid(numArgs, 2))) {
                  printf("Improper add command.\n");
                  printBoard(board, rowNum, colNum);
            } else if (XY == 'r') {
                  if ((user.xy > *rowNum) || (user.xy < 0)) {
                        printf("Improper add command.\n");
                        printBoard(board, rowNum, colNum);
                  } else {
                    *rowNum += 1;
                    addRow(user, &board, rowNum, colNum);
                  }
            } else if (XY == 'c') {
                  if ((user.xy > *colNum) || (user.xy < 0)) {
                        printf("Improper add command.\n");
                        printBoard(board, rowNum, colNum);
                  } else {
                    *colNum += 1;
                    addCol(user, board, rowNum, colNum);
                  }
            }
      } else if (userInput == 'd') {
            char XY;
            numArgs = scanf(" %c %d", &XY, &user.xy);
            if (!(checkValid(numArgs, 2))) {
                  printf("Improper delete command.\n");
                  printBoard(board, rowNum, colNum);
            } else if (XY == 'r') {
                  if((user.xy >= *rowNum) || (user.xy < 0)) {
                        printf("Improper delete command.\n");
                        printBoard(board, rowNum, colNum);
                  } else {
                    *rowNum -= 1;
                    deleteRow(user, &board, rowNum, colNum);
                  }
            } else if (XY == 'c') {
                  if((user.xy >= *colNum) || (user.xy < 0)) {
                        printf("Improper delete command.\n");
                        printBoard(board, rowNum, colNum);
                  } else {
                    *colNum -= 1;
                    deleteCol(user, board, rowNum, colNum);
                  }
            }
      } else if (userInput == 'r') {
            scanf("%d %d", &user.xOne, &user.yOne);
            if ((user.xOne < 1) || (user.yOne < 1)) {
                  printf("Improper resize command.\n");
                  printBoard(board, rowNum, colNum);
            } else {
              changeBoard(user, rowNum, colNum, &board);
            }
      } else if (userInput == 's') {
            char file[100];
            scanf("%s", file);
            save(user, board, rowNum, colNum, file);
            printBoard(board, rowNum, colNum);
      } else if (userInput == 'l') {
            char file[100];
            scanf("%s", file);
            load(user, &board, rowNum, colNum, file);
      } else if (!(checkValid(numArgs, 1))) {
            printf("Unrecognized command. Type h for help.\n");
            printBoard(board, rowNum, colNum);
      }
}

void save(plottingPoints user, char **board, int *rowNum, int *colNum, char *file) {
    FILE* openedFile = NULL;
    openedFile = fopen(file, "w");
    fprintf(openedFile, "%d %d", *rowNum, *colNum);
    fprintf(openedFile, "\n");
    for(int i = 0; i < *rowNum; ++i){
        for(int z = 0; z < *colNum; ++z) {
            fprintf(openedFile,"%c ", board[i][z]);
        }
        fprintf(openedFile, "\n");
    }
    fclose(openedFile);
}

void deletePoint(plottingPoints user, int *rowNum, int *colNum, char **board){
  board[*rowNum - (user.xOne) - 1][user.yOne] = '*';
  printBoard(board, rowNum, colNum);
}

void load(plottingPoints user, char ***board, int *rowNum, int *colNum, char *file) {
    FILE* openedFile = NULL;
    int newRows;
    int newCols;
    openedFile = fopen(file, "r");
    if (openedFile == NULL) {
        printf("Failed to open file: %s\n", file);
        printBoard(*board, rowNum, colNum);
    } else {
        fscanf(openedFile, "%d %d", &newRows, &newCols);
        *rowNum = newRows;
        *colNum = newCols;
        *board = (char**)realloc(*board, *rowNum * sizeof(char*));
        for(int i = 0; i < *rowNum; ++i) {
            (*board)[i] = (char*)realloc((*board)[i], *colNum * sizeof(char));
            for(int z = 0; z < *colNum; ++z) {
                fscanf(openedFile, "%c", board[i][z]);
            }
        }
    }
    for (int i = 0; i < *rowNum; ++i) {
        printf("%d ", *rowNum - i - 1);
        for(int z = 0; z < *colNum; ++z) {
            printf("%c ", (*board)[i][z]);
        }
        printf("\n");
    }
    printf("  ");
    for(int z = 0; z < *colNum; ++z) {
        printf("%d ", z);
    }
    printf("\n");
    fclose(openedFile);
}

void help() {
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

bool checkValid(int numArgs, int argsRequired) {
      char lastChar;
      bool isValid = true;
      if (numArgs != argsRequired) {
            isValid = false;
      }
      do {
            scanf("%c", &lastChar);
            if (lastChar != '\n') {
                isValid = false;
            }
      } while (lastChar != '\n');
      return isValid;
}

