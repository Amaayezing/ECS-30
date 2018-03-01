//Maayez Imam 10/9/2017
//Quadratic formula program

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double A() {
  double a;
  printf("Please enter a: ");
  scanf("%lf", &a);
  return a;
  //  this function asks the user to input the a value
}

double B() {
  double b;
  printf("Please enter b: ");
  scanf("%lf",&b);
  return b;
  //  this function asks the user to input the b value
}

double C() {
  double c;
  printf("Please enter c: ");
  scanf("%lf", &c);
  return c;
  //  this function asks the user to input the c value
}

void quadraticFormula (double numA, double numB, double numC) {
  //  this function uses the inputted values to determine how many solutions there are
  double realsolution1;
  double realsolution2;
  if ((numA != 0) && (numB > (sqrt(4 * numA * numC)))) {
    realsolution1 = ((-1 * numB) + (sqrt((pow(numB, 2)) - (4 * numA * numC)))) / (2 * numA);
    realsolution2 = ((-1 * numB) - (sqrt((pow(numB, 2)) - (4 * numA * numC)))) / (2 * numA);
    printf("There are 2 real solutions\n");
    printf("Solution 1: %.2lf\n", realsolution1);
    printf("Solution 2: %.2lf\n", realsolution2);
  }

  else if (numB == (sqrt(4 * numA * numC))) {
    realsolution1 = ((-1 * numB) / (2 * numA));
    printf("There is one real solution: %.2lf", realsolution1);
  }

  else {
    printf("There are no real solutions");
  }
}

void quad() {
  printf("Given a quadratic equation of the form a*x^2 + b * x + c\n");
}

int main() {
  double numA;
  double numB;
  double numC;
  quad();
  numA = A();
  numB = B();
  numC = C();
  quadraticFormula(numA, numB, numC);
  return 0;
  //  the main function calls the previous functions to calculate the solutions of the quadratic equation
}