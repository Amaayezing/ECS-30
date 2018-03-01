//  Maayez Imam 10/30/2017
//  Pascal's Triangle program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


void pascalTriangle();
void finalTriangle(int numbers);


void pascalTriangle() {  //  user inputs the number of levels desired
  int levels;
  printf("Please enter how many levels of Pascal's Triangle you would like to see: ");
  scanf(" %d", &levels);

  finalTriangle(levels);
}


void finalTriangle(int numbers) {  //  calculates each number in the triangle on each level
  int n[numbers][numbers];
  int i = 0;
  int j = 0;

  for (i = 0; i < numbers; i++) {  //  runs the loop the same number of times as desired levels
    for (j = 0; j <= i; j++) {
      if(j == 0 || i == j) {  //  sets the firs and last number of each row to 1
        n[i][j] = 1;
      }
      else {
        n[i][j] = n[i-1][j-1] + n[i-1][j];  //  adds the last two numbers together to find the correct value
      }
      printf("%d ", n[i][j]);  //  prints out the numbers
    }
    printf("\n");  //  prints out a new line for each new level
  }
}


int main() {

  pascalTriangle();

  return 0;
}