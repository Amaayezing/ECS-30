//Maayez Imam 10/5/2017
//Loan cost program

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int firstImaginary;
  int secondImaginary;
  int firstReal;
  int secondReal;
  int Imaginary;
  int Real;
  //  initializes the variables

  printf("Enter the first complex number in the form ai + b: ");
  scanf("%d i + %d", &firstImaginary, &firstReal);
  //  user inputs the first complex number in the form ai + b

  printf("Enter the second complex number in the form ai + b: ");
  scanf("%d i + %d", &secondImaginary, &secondReal);
  //  user inputs the second complex number in the form ai + b

  Imaginary = (firstImaginary * secondReal) + (secondImaginary * firstReal);
  //  calculates the imaginary part of the answer
  Real = (firstReal * secondReal) - (firstImaginary * secondImaginary);
  //  calculates the real part of the answer

  printf("(%di + %d) * (%di + %d) = %di + %d\n", firstImaginary, firstReal, secondImaginary, secondReal, Imaginary, Real);

  return 0;

}