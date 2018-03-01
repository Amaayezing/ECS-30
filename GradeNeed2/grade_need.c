//Maayez Imam 10/15/2017
//Grade Needed 2 program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void checkGradeWanted (char upLetterGrade, char gradeWanted) {
  //   checks that the grade wanted entered is validly formatted
  if (isdigit(upLetterGrade)) {
    printf("Invalid formatting. Ending program.\n");
    exit(0);
  }
  if ((upLetterGrade == 'E') || (upLetterGrade > 'F')) {
    printf("Unknown Grade Received: %c. Ending program.\n", gradeWanted);
    exit(0);
  }
}

void formatCheck (double input) {
  //  checks if the number is formatted correctly
  if (input < 0) {
    printf("The number you last entered should have been positive. Ending program.\n");
    exit(0);
  }
  if (input > 100) {
    printf("Invalid formatting. Ending program.\n");
    exit(0);
  }
}

void numCheck (int numRead, int numNeed) {
  char newLine;
  if (numRead != numNeed) {
    printf("Invalid formatting. Ending program.\n");
    exit(0);
  }
  scanf("%c", &newLine);
  if (newLine != '\n') {
    printf("Invalid formatting. Ending program.\n");
    exit(0);
  }
}

void gradeNeeded () {
  char gradeWanted, upLetterGrade;
  double wantedGrade = 0.00, currentPercent, finalWeight, finalGrade;
  int numRead;

  printf("Enter the grade you want in the class: ");
  numRead = scanf(" %c", &gradeWanted);
  numCheck(numRead, 1);

  upLetterGrade = (toupper(gradeWanted));
  checkGradeWanted(upLetterGrade, gradeWanted);

  printf("Enter your current percent in the class: ");
  numRead = scanf(" %lf", &currentPercent);
  numCheck(numRead, 1);

  formatCheck(currentPercent);

  printf("Enter the weight of the final: ");
  numRead = scanf(" %lf", &finalWeight);
  numCheck(numRead, 1);

  formatCheck(finalWeight);

  if (upLetterGrade <= 'D' || (upLetterGrade == 'F')) {
    switch (upLetterGrade) {
      case 'A':wantedGrade = 90.00;
        break;
      case 'B':wantedGrade = 80.00;
        break;
      case 'C':wantedGrade = 70.00;
        break;
      case 'D':wantedGrade = 60.00;
        break;
      case 'F':wantedGrade = 0.00;
    }
    finalGrade = (wantedGrade - (currentPercent * (100 - finalWeight) * 0.01)) / (0.01 * finalWeight);
    if (finalGrade > 100) {
      printf("You cannot get a %c in the class because you would need to score at least %.2lf%% on the final.\n",
             gradeWanted,
             finalGrade);
    } else if (finalGrade < 0) {
      printf("You cannot score low enough on the final to get a %c in the class.\n", gradeWanted);
    } else {
      printf("You need a grade of at least %.2lf%% on the final to get a %c in the class.", finalGrade, gradeWanted);
    }
  } else {
    printf("Unknown grade received: %c\n", gradeWanted);
  }
}

  int main() {
    gradeNeeded();
    return 0;
  }

