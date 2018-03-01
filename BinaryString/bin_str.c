//Maayez Imam & Abdullah Mohammed 12/6/17
//Binary String Program

#include <stdio.h>
#include <string.h>

void replace(char *array, int index, char *num, int length) {
  int i = 0;

  if (num[index] == '0') {
    array[index] = num[index];
    replace(array, index + 1, num, length);
  }
  else if (num[index] == '1') {
    array[index] = num[index];
    replace(array, index + 1, num, length);
  }
  else if (num[index] == 'x') {
    array[index] = '0';
    replace(array, index + 1, num, length);

    array[index] = '1';
    replace(array, index + 1, num, length);
  }
  else if (num[index] == '\0') {
    for (i = 0; i < length; ++i) {
      printf("%c", array[i]);
    }
    printf("\n");
  }
}

int main(int argc, const char * ARGV[]) {
  char num[100];
  char array[100];
  int length = 0;
  sscanf(ARGV[1], "%s", num);
  length = strlen(num);
  replace(array, 0, num, length);
  return 0;
}
