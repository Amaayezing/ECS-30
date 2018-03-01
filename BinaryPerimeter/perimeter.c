//  Maayez Imam 11/29/2017
//  Binary Perimeter program

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int perimeter(int argument, const char * vargument[]);

int main(int argument, const char * vargument[]) {
  perimeter(argument, vargument);
}

int perimeter(int argument, const char * vargument[]) {
  FILE* file = NULL;
  int points;
  int i = 0;
  long bytes = 0;
  int* xCoordinate = (int*)malloc(sizeof(int));
  int* yCoordinate = (int*)malloc(sizeof(int));
  double distanceX = 0.00, distanceY = 0.00, perimeter = 0.00;

  file = fopen(vargument[1], "rb");
  bytes = fread(&points, sizeof(int), 1, file);

  xCoordinate = (int*)realloc(xCoordinate, points * sizeof(int));
  yCoordinate = (int*)realloc(yCoordinate, points * sizeof(int));

  while(bytes !=0) {
    bytes = fread(&xCoordinate[i], sizeof(int), 1, file);
    bytes = fread(&yCoordinate[i], sizeof(int), 1, file);
    ++i;
  }

  for(i = 0; i < points; ++i) {
    distanceX = xCoordinate[(i+1) % points] - xCoordinate[i];
    distanceY = yCoordinate[(i+1) % points] - yCoordinate[i];
    perimeter += sqrt(pow(distanceX, 2.0) + pow(distanceY, 2.0));
  }

  printf("The perimeter is %.2lf\n", perimeter);
  fclose(file);

  return 0;
}