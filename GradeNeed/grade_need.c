// Maayez Imam 10/2/2017
// Grade needed program

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char gradeWanted;
  printf("Enter the grade you want in the class: ");  // user is prompted to enter the letter grade they want in the class
  scanf("%c", &gradeWanted);  // user inputs the letter grade they want in the class

  double percentNeeded;
  printf("Enter the percent you need to get that grade: ");
  // user is prompted to enter the percent they need to get that grade
  scanf("%lf", &percentNeeded);  // user inputs the percent they need to get that letter grade

  double currentPercent;
  printf("Enter your current percent in the class: ");
  // user is prompted to enter the current grade they have in the class
  scanf("%lf", &currentPercent);  // user inputs the current grade they have in the class

  double finalWeight;
  printf("Enter the weight of the final: ");  // user is prompted to enter the weight of the final
  scanf("%lf", &finalWeight);  // user inputs the weight of the final

  double gradeNeeded;
  gradeNeeded = ((percentNeeded * 0.01) - (currentPercent * 0.01 * (1 - (finalWeight * 0.01)))) / (finalWeight * 0.01);
  gradeNeeded = gradeNeeded * 100;
  // calculates the grade the user needs in order to get the grade they want, given their current grade and the weight of the final

  printf("You need to get at least %3.2lf%% on the final to get a %c in the class.", gradeNeeded, gradeWanted);
  // prints out the grade the user needs on the final to get their desired grade
}