#include "addAndDelete.h"
#include "inputStruct.h"
#include "getInput.h"
#include "board.h"
#include <stdio.h>
#include <stdlib.h>


void addCol(plottingPoints user, char **board, int *rowNum, int *colNum) {
    for (int i = 0; i < *rowNum; ++i) {
        board[i] = (char*)realloc(board[i], *colNum * sizeof(char));
    }
    for (int i = 0; i < *rowNum; ++i) {
        for (int z = *colNum - 1; z > user.xy; --z) {
            board[i][z] = board[i][z - 1];
        }
        board[i][user.xy] = '*';
    }
    printBoard(board, rowNum, colNum);
}

void addRow(plottingPoints user, char*** board, int* rowNum, int* colNum) {
    *board = (char**)realloc(*board, *rowNum * sizeof(char*));
    (*board)[*rowNum - 1] = (char*)realloc((*board)[*rowNum - 1], *colNum * sizeof(char));
    for (int i = *rowNum - 1; i > *rowNum - user.xy - 1; --i) {
        for (int z = 0; z < *colNum; ++z) {
            (*board)[i][z] = (*board)[i - 1][z];
        }
    }
    for (int i = 0; i < *colNum; ++i) {
        (*board)[*rowNum - user.xy - 1][i] = '*';
    }
    printBoard(*board, rowNum, colNum);
}

void deleteCol(plottingPoints user, char **board, int *rowNum, int *colNum) {
    for (int i = 0; i < *rowNum; ++i){
        for (int z = user.xy; z < *colNum; ++z) {
            board[i][z] = board[i][z + 1];
        }
    }
    for (int i = 0; i < *rowNum; ++i) {
        board[i] = (char*)realloc(board[i], (*colNum) * sizeof(char));
    }
    printBoard(board, rowNum, colNum);
}

void deleteRow(plottingPoints user, char*** board, int* rowNum, int* colNum) {
    for (int i = *rowNum - user.xy; i < *rowNum; ++i) {
        for (int z = 0; z < *colNum; ++z) {
            (*board)[i][z] = (*board)[i + 1][z];
        }
    }
    *board = (char**)realloc(*board, *rowNum * sizeof(char*));
    printBoard(*board, rowNum, colNum);
}
