//  Maayez Imam 12/4/2017
//  Word Count program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int wordCount(char* fileName);

int main(int argc, char** argv) {
  wordCount(argv[1]);
}


int wordCount(char* filename) {
  FILE *fp = fopen(filename, "r");

  int wordCount = 0;

  if(fp == NULL){
    printf("Failed to open file %s\n", filename);
    exit(0);
  }

  char c;
  fscanf(fp, "%c", &c);
  while(!feof(fp)){
    if(isspace(c)) {
      ++wordCount;
    }
    fscanf(fp, "%c", &c);
  }

  printf("There are %d word(s).", wordCount);
  fclose(fp);

  return wordCount;
}
