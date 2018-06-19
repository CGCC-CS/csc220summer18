#include <stdio.h>
#include "myFile.h"

int myNum = 0;

void init(void) {
   printf("Initializing myFile. myNum = %d\n",myNum);
   myNum = 1;
}

int addone(int n) {
   myNum ++;
  return (n + 1);
}

void doubleIt(int *n) {
   myNum ++;
   *n = *n * 2;
}

int factorial(int n) {
   myNum ++;
  if (n <= 1)
     return 1;
  else
     return (n * factorial (n-1));
}
