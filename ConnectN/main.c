//  Maayez Imam 11/09/17
// Connect N program

#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "turn.h"
#include "game.h"

void makeMove(char** board, int numRows, int numCols, int col, char piece) {
      int i;

      for(i = numRows-1; i >= 0; --i) {
           if(board[i][col] == '*') {
                  board[i][col] = piece;
                  break;
              }
        }
      printBoard(board, numRows, numCols);
  }

void declareWinner(char** board, int numRows, int numCols, int turn, int numToWin) {
      if(tied(board, numRows, numCols, numToWin)) {
            printf("Tie game!\n");
        }
      else if(turn == 0) {
            printf("Player 2 Won!\n");
        }
      else {
            printf("Player 1 Won!\n");
        }

  }

void playGame(char** board, int turn, int numRows, int numCols, int numToWin) {
      int col;
      char pieces[] = "XO";

      while(!checkGameOver(board, numRows, numCols, numToWin)) {
            col = getValidMove(board, numCols);
            makeMove(board, numRows, numCols, col, pieces[turn]);
            turn = (turn + 1) % 2;
      }

      declareWinner(board, numRows, numCols, turn, numToWin);

  }

int main(int argc, const char * argv[]) {
      int numRows, numCols, numToWin;
      char** board;
      int turn;

      if(argc != 4) {
            if (argc < 4) {
                  printf("Not enough arguments entered\n");
                  printf("Usage connectn.out num_rows num_columns number_of_pieces_in_a_row_needed_to_win\n");
                  exit(0);
              }
            else if (argc > 4) {
                  printf("Too many arguments entered\n");
                  printf("Usage connectn.out num_rows num_columns number_of_pieces_in_a_row_needed_to_win\n");
                  exit(0);
              }
        }
      else {
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