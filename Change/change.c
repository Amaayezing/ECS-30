//Maayez Imam 10/2/2017
//Change program

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int moneyWithdrawn;
  int ones;
  int fives;
  int tens;
  int twenties;
  int fifties;
  int hundreds;
  int modhundreds;
  int modfifties;
  int modtwenties;
  int modtens;
  int modfives;

  printf("Please enter the amount of money you wish to withdraw: ");
  scanf("%d", &moneyWithdrawn);
  //  user inputs the amount of money they want withdrawn

  hundreds = moneyWithdrawn / 100; //  divides amount withdrawn by 100 to find how many 100s are required
  modhundreds = moneyWithdrawn % 100; //  finds the mods of the withdrawn money and 100
  fifties = modhundreds / 50; //  divides the previous mod by 50 to find how many 50s are required
  modfifties = modhundreds % 50; //  finds the mod of the   
  twenties = modfifties / 20;
  modtwenties = modfifties % 20;
  tens = modtwenties / 10;
  modtens = modtwenties % 10;
  fives = modtens / 5;
  modfives = modtens % 5;
  ones = modfives % 5;

  printf("You received %d hundred(s)\n", hundreds);
  printf("You received %d fifty(s)\n", fifties);
  printf("You received %d twenty(s)\n", twenties);
  printf("You received %d ten(s)\n", tens);
  printf("You received %d five(s)\n", fives);
  printf("You received %d one(s)\n", ones);


  return 0;
}