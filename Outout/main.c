#include <stdio.h>

int main() {
  //printf is the function for outputting text to the screen
  //the text must be in a format string
  printf("Look at my string\n");


  printf("A new line: \n");
  printf("A tab: \t \n");
  printf("A single forward slash: \\ \n");
  printf("a / isn't special \n");
  printf("A double quote: \" \n");
  printf("A single percent sign: %% \n");

  int aInt = 10;
  float aFloat = 12.9;
  double aDouble = 12.4543;
  char aChar = 'a';


  printf("Printing out and integer: %d\n", aInt);
  printf("Printing out a float: %f\n", aFloat);
  printf("Printing out a double: %lf\n", aDouble);

  printf("An int and a double and a character: %d, %lf, %c\n", aInt, aDouble, aChar);

  int a = 2, b = 3, c;
  printf("Did you know %d + %d = %d\n", a, b, a + b);
}