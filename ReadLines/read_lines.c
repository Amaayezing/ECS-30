//  Maayez Imam 11/29/2017
//  Read Lines program

#include <stdio.h>
#include <stdlib.h>
#include "read_lines.h"


void read_lines(FILE* file, char*** lines, int* line_num) {
  char array[1000];
  int i = 0;

  while(fgets(array, 1000, file) != NULL) {
    ++*line_num;
  }

  *lines = (char**)malloc(*line_num * sizeof(char*));

  fseek(file, 0, SEEK_SET);

  for (i = 0; i < *line_num; ++i) {
    (*lines)[i]= (char*)malloc(1000 * sizeof(char));
    fgets((*lines)[i], 1000, file);
  }
}