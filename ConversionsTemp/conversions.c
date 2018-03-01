//  Maayez Imam 10/15/2017
//  Conversions program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void conversionCheck(char conversionType) {
  if (((conversionType >= 'A') && (conversionType < 'D')) || ((conversionType > 'D') && (conversionType < 'T')) || ((conversionType > 'T') && (conversionType <= 'Z'))) {
    printf("Unknown conversion type %c chosen. Ending program.\n", conversionType);
    exit(0);
  }
  else if (isdigit(conversionType)) {
    printf("Invalid formatting. Ending program.\n");
    exit(0);
  }
}

void unitCheck(char temp, char distance) {
  if (((temp >= 'A') && (temp < 'C')) || ((temp > 'C') && (temp < 'F')) || ((temp > 'F') && (temp < 'K')) || ((temp > 'K') && (temp <= 'Z'))) {
    printf ("%c is not a valid temperature type. Ending program.\n", temp);
    exit(0);
  }
  if (((distance >= 'A') && (distance < 'F')) || ((distance > 'F') && (distance < 'I')) || ((distance > 'I') && (distance < 'M')) || ((distance > 'M') && (distance < 'Y')) || ((distance > 'Y') && (distance <= 'Z'))) {
    printf("%c is not a valid distance type. Ending program.\n", distance);
    exit(0);
  }
}

void numCheck(int numRead, int numNeed) {
  char newLine;
  if (numRead != numNeed) {
    printf("Invalid formatting. Ending program.\n");
    exit(0);
  }
  scanf("%c", &newLine);
  if (newLine != '\n') {
    printf("Invalid formatting. Ending program.\n");
    exit (0);
  }
}

void conversions () {
  char conversionType, tempInitial, distanceInitial, tempDesired, distanceDesired;
  double valueInitial, valueFinal;
  int numRead;

  printf("Pick the type of conversion that you would like to do.\nT or t for temperature\nD or d for distance\nEnter your choice: ");
  numRead = scanf(" %c", &conversionType);
  numCheck(numRead, 1);

  conversionType = toupper(conversionType);

  conversionCheck(conversionType);

  if (conversionType == 'T') {
    printf("Enter the temperature followed by its suffix (F, C, or K): ");
    numRead = scanf (" %lf %c", &valueInitial, &tempInitial);
    numCheck(numRead, 2);

    tempInitial = toupper(tempInitial);
    unitCheck(tempInitial, distanceInitial);

    printf("Enter the new unit type (F, C, or K): ");
    numRead = scanf(" %c", &tempDesired);
    numCheck(numRead, 1);

    unitCheck(tempDesired, distanceDesired);

    tempDesired = toupper(tempDesired);

    switch (tempDesired) {
      case 'F' :
        if (tempInitial == 'F') {
          valueFinal = valueInitial;
        }
        else if (tempInitial == 'K') {
          valueFinal = (valueInitial - 273.15) * 9/5 + 32;
        }
        else if (tempInitial == 'C') {
          valueFinal = (valueInitial * 9/5) + 32;
        }
        break;

      case 'K' :
        if (tempInitial == 'K') {
          valueFinal = valueInitial;
        }
        else if (tempInitial == 'F') {
          valueFinal = (valueInitial - 32) * 5/9 + 273.15;
        }
        else if (tempInitial == 'C') {
          valueFinal = valueInitial + 273.15;
        }
        break;

      case 'C' :
        if (tempInitial == 'C') {
          valueFinal = valueInitial;
        }
        else if (tempInitial == 'K') {
          valueFinal = valueInitial - 273.15;
        }
        else if (tempInitial == 'F') {
          valueFinal = (valueInitial - 32) * 5/9;
        }
        break;
    }

    printf("%.2lf%c is %.2lf%c\n", valueInitial, tempInitial, valueFinal, tempDesired);

  }

  else if (conversionType == 'D') {

    printf("Enter the distance followed by its suffix (I,F,Y,M): ");
    numRead = scanf(" %lf %c", &valueInitial, &distanceInitial);
    numCheck(numRead, 2);

    distanceInitial = toupper(distanceInitial);
    unitCheck(tempInitial, distanceInitial);

    printf("Enter the new unit type (I,F,Y,M): ");
    numRead = scanf(" %c", &distanceDesired);
    numCheck(numRead, 1);

    unitCheck(tempDesired, distanceDesired);

    distanceDesired = toupper(distanceDesired);

    switch (distanceDesired) {
      case 'I' :
        if (distanceInitial == 'I') {
          valueFinal = valueInitial;
        }
        else if (distanceInitial == 'F') {
          valueFinal = valueInitial * 12;
        }
        else if (distanceInitial == 'Y') {
          valueFinal = valueInitial * 36;
        }
        else if (distanceInitial == 'M') {
          valueFinal = valueInitial * 63360;
        }
        break;

      case 'F' :
        if (distanceInitial == 'F') {
          valueFinal = valueInitial;
        }
        else if (distanceInitial == 'I') {
          valueFinal = valueInitial / 12 ;
        }
        else if (distanceInitial == 'Y') {
          valueFinal = valueInitial * 3;
        }
        else if (distanceInitial == 'M') {
          valueFinal = valueInitial * 5280;
        }
        break;

      case 'Y' :
        if (distanceInitial == 'Y') {
          valueFinal = valueInitial;
        }
        else if (distanceInitial == 'I') {
          valueFinal = valueInitial / 36;
        }
        else if (distanceInitial == 'F') {
          valueFinal = valueInitial / 3;
        }
        else if (distanceInitial == 'M') {
          valueFinal = valueInitial * 1760;
        }
        break;

      case 'M' :
        if (distanceInitial == 'M') {
          valueFinal = valueInitial;
        }
        else if (distanceInitial == 'I') {
          valueFinal = valueInitial / 63360;
        }
        else if (distanceInitial == 'F') {
          valueFinal = valueInitial / 5280;
        }
        else if (distanceInitial == 'Y') {
          valueFinal = valueInitial / 1760;
        }
        break;
    }

    printf("%.2lf%c is %.2lf%c\n", valueInitial, distanceInitial, valueFinal, distanceDesired);
  }
}

int main() {
  conversions();
  return 0;
}