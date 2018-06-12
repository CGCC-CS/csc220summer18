#include<stdio.h>

unsigned int easyencrypt(char c);

int main() {
  int c;

  while ( (c = getc(stdin)) != EOF) {
    printf("%c", easyencrypt(c));
    c++;
  }

  printf("\n");
  return 0;
}


unsigned int easyencrypt(char c){
  return c + 1;
}
  
