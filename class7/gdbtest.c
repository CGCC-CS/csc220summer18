#include<stdio.h>
/* For gdb example */

struct thing {
  int a;
  char c[8];
};

void problem2() {
  int k = 0;
  int a = 10 / k;
}

void problem1() {
  problem2();
}

int main() {
  int a = 10, ii;
  struct thing s = {50, "Hello!"};
  struct thing * ptr = &s;

  for (ii=0;ii<10;ii++) {
    printf("a=%d\n", ++a);
  }

  /*
  problem1();
  */

  printf("ptr=%d %s\n", ptr->a, ptr->c);
  return 0;
}
