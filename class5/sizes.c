#include<stdio.h>
#include<string.h>

void myfun (char str[]) {
  char str2[] = "1234567890";

  printf("myfun: sizeof(%s) = %lu\n", str, sizeof(str));
  printf("myfun: strlen(%s) = %d\n", str, strlen(str));
  printf("myfun: sizeof(%s) = %lu\n", str2, sizeof(str2));
  printf("myfun: strlen(%s) = %d\n", str2, strlen(str2));
}

int main () {
  char str[] = "ABCDEFGHIJ";

  printf("sizeof(%s) = %lu\n", str, sizeof(str));
  printf("strlen(%s) = %d\n", str, strlen(str));
  printf("\n");
  myfun(str);
  return 0;
}
