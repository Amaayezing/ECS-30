// Maayez Imam & Abdullah Mohammed 12/6/17
// Foo Program

#include <stdio.h>

/*int foo() {
  int n;
  int foo;
  printf("Enter a value for n: ");
  scanf(" %d", &n);
  if (n == 0) {
    foo = 3;
  }
  else if (n == 1) {
    foo = 6;
  }
  else if (n == 2) {
    foo = 2;
  }
  else if (n == 3) {
    foo = 7;
  }
  else if (n == 35) {
    foo = 246233561;
  }
  else if (n == 25) {
    foo = 1073505;
  }
  else if (n == 30) {
    foo = 16258323;
  }
  else if (n == 10) {
    foo = 307;
  }
  else if (n == 5) {
    foo = 17;
  }
  else if (n == 4) {
    foo = 13;
  }
  printf("Foo(%d) = %d", n, foo);
}

int main() {
  foo();
}*/


int foo(int n, int one, int two, int three, int four) {
  if(n == 0) {
    return one;
  }
  else if (n == 1) {
    return two;
  }
  else if (n == 2) {
    return three;
  }
  else if (n == 3) {
    return four;
  }
  else {
    return foo(one + two + three - four + 1, one, two, three, four);
  }
}

int return_foo(int n) {
  return foo(n, 3, 6, 2, 7);
}

int main() {
  int num;
  int value;
  printf("Enter a value for n: ");
  scanf(" %d", &num);
  value = return_foo(num);
  printf("Foo(%d) = %d\n", num, value);
  return 0;
}
