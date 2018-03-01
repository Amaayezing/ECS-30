//  board.h
//  connectn.c
//  Header file for board.c
//  Created by Sanjna Duvvur on 11/8/16.
//  Copyright © 2016 Sanjna Duvvur. All rights reserved.
//

#ifndef BOARD_H
#define BOARD_H
void setUp(char*** board, int *turn, int numRows, int numCols);
char** makeBoard(int numRows, int numCols);
void printBoard(char** board, int numRows, int numCols);
void cleanUpBoard(char** board, int numRows);
#endif