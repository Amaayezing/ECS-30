#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isValidFormat(const int numArgsRead, const int numArgsNeed);
bool isValidFormat(const int numArgsRead, const int numArgsNeed) {
  bool formatIsGood = numArgsRead == numArgsNeed;

  char character;

  do {
    scanf("%c", &character);
    if (!isspace(character)) {
      formatIsGood = false;
    }
    //formatIsGood = formatIsGood && isspace(character);
    //formatIsGood = isspace(character) ? formatIsGood : false;
  } while (character != '\n');

  return formatIsGood;
}

int getValidInt() {
  int num;
  const int numArgsNeeded = 1;
  int numArgsRead;

  do {
    printf("Enter a number: ");
    numArgsRead = scanf(" %d", &num);
  } while (!isValidFormat(numArgsRead, numArgsNeeded));

  return num;
}

int main() {

  int number = getValidInt();

  printf("You entered a valid int.\n");
  return 0;
}