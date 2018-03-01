//  Maayez Imam & Abdullah Mohammed 12/15/17
//  Paint Program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "board.h"
#include "getInput.h"
#include "inputStruct.h"

int main(int argc, const char * ARG[]) {
      plottingPoints user;
      int numRows, numCols;
      int argsRows, argsCols;
      int* rows;
      int* cols;
      char** board = NULL;
      int defaultRows = 10;
      int defaultCols = 10;
      rows = (int*)malloc(sizeof(int));
      cols = (int*)malloc(sizeof(int));
      if(argc == 3) {
            argsRows = sscanf(ARG[1], "%d", &numRows);
            argsCols = sscanf(ARG[2], "%d", &numCols);
            if (argsRows != 1) {
                  printf("The number of rows is not an integer.\n");
                  printf("Making default board of %d X %d.\n", defaultRows, defaultCols);
                  rows = &defaultRows;
                  cols = &defaultCols;
            } else if(numRows < 1) {
                  printf("The number of rows is less than 1.\n");
                  printf("Making default board of %d X %d.\n", defaultRows, defaultCols);
                  rows = &defaultRows;
                  cols = &defaultCols;

            } else if(argsCols != 1) {
                  printf("The number of columns is not an integer.\n");
                  printf("Making default board of %d X %d.\n", defaultRows, defaultCols);
                  rows = &defaultRows;
                  cols = &defaultCols;
            } else if(numCols < 1) {
                  printf("The number of columns is less than 1.\n");
                  printf("Making default board of %d X %d.\n", defaultRows, defaultCols);
                  rows = &defaultRows;
                  cols = &defaultCols;
            } else {
                  rows = &numRows;
                  cols = &numCols;
            }
      } else if(argc > 3) {
            printf("Wrong number of command line arguements entered.\n");
            printf("Usage: ./paint.out [num_rows num_cols]\n");
            printf("Making default board of %d X %d.\n", defaultRows, defaultCols);
            rows = &defaultRows;
            cols = &defaultCols;
      } else {
            rows = &defaultRows;
            cols = &defaultCols;
      }
      setUp(&board, rows, cols);
      printBoard(board, rows, cols);
      runPaint(board, user, rows, cols);
      //freeBoard(board, numRows);
      //free(rows);
      //free(cols);
      return 0;
  }