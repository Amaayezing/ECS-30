//
// Created by Maayez Imam on 11/10/2017.
//
#ifndef BOARD_H
    #define BOARD_H
    void setUp(char*** board, int *turn, int numRows, int numCols);
    char** makeBoard(int numRows, int numCols);
    void printBoard(char** board, int numRows, int numCols);
    void cleanUpBoard(char** board, int numRows);
#endif

