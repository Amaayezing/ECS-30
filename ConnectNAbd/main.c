//  main.c
//  This program simulates a connect n game. The board size and number of pieces in a row are determined by the user and two players take turns placing pieces. 
//  Created by Sanjna Duvvur on 11/7/16.
//  Copyright © 2016 Sanjna Duvvur. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "turnInput.h"
#include "win.h"

void makeMove(char** board, int numRows, int numCols, int col, char piece){ /*replaces * piece with X or O depending on turn*/
    int i;
    
    for(i = numRows-1; i >= 0; --i){
        if(board[i][col] == '*'){
            board[i][col] = piece;
            break;
        }
    }
    printBoard(board, numRows, numCols);
}

void declareWinner(char** board, int numRows, int numCols, int turn, int numToWin){ /*determines whether player 1 or player 2 won or if there is a tie; outputs winner*/
    if(tied(board, numRows, numCols, numToWin)){
        printf("Tie game!\n");
    }
    else if(turn == 0){
        printf("Player 2 Won!\n");
    }
    else{
        printf("Player 1 Won!\n");
    }
    
}

void playGame(char** board, int turn, int numRows, int numCols, int numToWin){ //runs game
    int col;
    char pieces[] = "XO";
    
    while(!checkGameOver(board, numRows, numCols, numToWin)){ /*takes in user input and moves pieces until a player has won or game is tied*/
        col = getValidMove(board, numCols);
        makeMove(board, numRows, numCols, col, pieces[turn]);
        //change the turn
        turn = (turn + 1) % 2;
    }
    
    declareWinner(board, numRows, numCols, turn, numToWin);
    
}

int main(int argc, const char * argv[]) {
    int numRows, numCols, numToWin;
    char** board;
    int turn;
    
    if(argc != 4){ //checks for valid number of arguments, exits program if there is not the right amount
        if (argc < 4){
            printf("Not enough arguments entered\n");
            printf("Usage connectn.out num_rows num_columns number_of_pieces_in_a_row_needed_to_win\n");
            exit(0);
        }
        else if (argc > 4){
            printf("Too many arguments entered\n");
            printf("Usage connectn.out num_rows num_columns number_of_pieces_in_a_row_needed_to_win\n");
            exit(0);
        }
    }
    else{
        sscanf(argv[1], "%d", &numRows);
        sscanf(argv[2], "%d", &numCols);
        sscanf(argv[3], "%d", &numToWin);
    }
    
    setUp(&board, &turn, numRows, numCols);
    printBoard(board, numRows, numCols);
    playGame(board, turn, numRows, numCols, numToWin);
    cleanUpBoard(board, numRows);
    
    
    return 0;
}
