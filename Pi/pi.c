//  Maayez Imam and Abdullah Mohammed 10/18/2017
//  Pi program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void input();
bool validFormatting(int numArgsRead, int numArgsNeeded);
int validSeed();
int validIteration();
//  void checkNumArgs (int numArgsRead, int numArgsNeeded);
void coordinates(int numOfIterations, int pointsInCircle);
double pointRandom();


void input() {
  int circlePoints = 0;
  int seed;
  int iterations;

  seed = validSeed();
  iterations = validIteration();
  srand(seed);
  coordinates(iterations, circlePoints);
}

int validSeed() {
  int seed;
  int numArgsRead;

  do {
    printf("Enter the seed for the random number generator: ");
    numArgsRead = scanf (" %d", &seed);
  }
  while(!(validFormatting(numArgsRead, 1)));

  return seed;
}


bool validFormatting(int numArgsRead, int numArgsNeeded) {
  char newLine = '\n';
  bool isValid = true;
  if (numArgsRead != numArgsNeeded) {
    isValid = false;
  }
  do {
    scanf("%c", &newLine);
    if (!isspace(newLine)) {
      isValid = false;
    }
  }
  while (newLine != '\n');
  return isValid;
}

int validIteration() {
  int numOfIterations;
  int numArgsRead;

  do {
    printf("Enter the number of iterations to run: ");
    numArgsRead = scanf(" %d", &numOfIterations);
  }

  while(!(validFormatting(numArgsRead, 1)) || (numOfIterations < 0));

  return numOfIterations;
}

double pointRandom() {
  return -1 + ((double)(random()) / (((double) RAND_MAX)/(1 - -1)));
}

void coordinates(int numOfIterations, int circlePoints) {
  int i;
  double xAxis;
  double yAxis;
  double pi;
  double circleProb;

  for (i = 0; i < numOfIterations; i++) {
    xAxis = pointRandom();
    yAxis = pointRandom();

    if (pow(xAxis, 2) + pow(yAxis, 2) <= 1) {
      ++circlePoints;
    }
  }

  circleProb = (double)circlePoints / (double)numOfIterations;
  pi = circleProb * 4;

  printf("The value of pi is %.3lf.\n", pi);

}

int main() {

  input();

  return 0;
}