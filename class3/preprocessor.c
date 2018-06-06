/* This is a comment */
#include "myfunctions.h"

#define NUM 10

int main() {
  int x = NUM;
  int y = 0;
  int z = 0;

  while (y < NUM * 2) {
    z = MAX(x,'ABCDEFG'); 
    y ++;
  }
  return 0;
}
