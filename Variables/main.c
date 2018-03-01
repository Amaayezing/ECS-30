#include <stdio.h>

//VARIABLES ARE MADE UP OF LETTERS, NUMBERS, AND UNDERSCORES BUT CANNOT START WITH A NUMBER
// 1andonly, What!, You and me = ALL INVALID VARIABLES

int main() {
  short smallWholeNumbers = 12;
  int wholeNumbers = 35;

  float realNumbers = 12.79;
  double betterRealNumbers = 58.24; //doubles have better precision and wider range than float

  char character = 'A';

  int uninitialized; //variables don't have to be initialized when declared, but they need to be initialized before they are used

  int unknown1, unknown2; //multiple variables of the SAME type can be created on the same line

  char firstLetter = 'a', secondLetter = 'b', thirdLetter = 'c'; //multiple variables can also be assigned to on the same line

  int set = 1, unset; //or initialize some of them

  unset = 10;
  unset = 12; //variable values can change later on

  unknown1 = unset + wholeNumbers;
  unknown2 = unknown1 * 2; //variables can be used in expression
  //variables can be updated based on their old value
  unset = unset + unset + 5;

  const float pi = 3.14159; //const means variable's value can never change

  pi = 4; //this causes an error because pi as a const and cannot be changed

  unsigned int posOnly = 12; //unsigned means a variable can only store positive values

  posOnly = -1;

  static int functionGlobal = 12; //make a variable global but only accessible inside this function

  static const unsigned int hasItAll = 100; //modifiers can be combined

  int int1 = 12;
  double double1 = (double) int1;

  int roundDown = (int)5.69; //rounding a float or double to an int
}