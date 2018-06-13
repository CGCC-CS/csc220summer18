/*
 * $ gcc -ansi -pedantic -Wall easy.c -DOP=- -o decrypt
 * $ gcc -ansi -pedantic -Wall easy.c -DOP=+ -o encrypt
 * $ echo "This is a test." | ./encrypt 
 * Uijt!jt!b!uftu/
 * $ echo "This is a test." | ./encrypt | ./decrypt 
 * This is a test.
 */

#include<stdio.h>

unsigned int easydecrypt(char c);

int main() {
  int c;

  while ( (c = getc(stdin)) != EOF) {
    printf("%c", easydecrypt(c));
    c++;
  }

  printf("\n");
  return 0;
}

unsigned int easydecrypt(char c){
  return c OP 1;
}
  
