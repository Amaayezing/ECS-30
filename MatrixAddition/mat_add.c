//  Maayez Imam 10/30/2017
//  Matrix Addition program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void matrix();

void matrix() {  //  this function gets user input and performs the matrix addition
  int rows;
  int cols;
  int matrixOne[100][100];
  int matrixTwo[100][100];
  int finalMatrix[100][100];
  int i;
  int j;
  //  declares the variables used

  printf("Please enter the number of rows: ");
  scanf(" %d", &rows);
  //  user inputs the number or rows

  printf("Please enter the number of columns: ");
  scanf(" %d", &cols);
  //  user inputs the number of columns

  printf("Enter Matrix A\n");
  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      scanf(" %d", &matrixOne[i][j]); //  user input for elements in matrix A
    }
  }

  printf("Enter Matrix B\n");
  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      scanf(" %d", &matrixTwo[i][j]); //  user input for elements in matrix B
    }
  }

  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      finalMatrix[i][j] = matrixOne[i][j] + matrixTwo[i][j]; //  calculates the final matrix by adding elements of matrix A and B
    }
  }

  printf("A + B =\n");
  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      printf("%d", finalMatrix[i][j]); //  prints the final matrix
      printf(" ");
    }
    printf("\n");
  }
}

int main() {

  matrix(); //  calls matrix function

  return 0;
}