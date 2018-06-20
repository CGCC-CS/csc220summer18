#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100

int main() {
  FILE *numberlist;
  char buffer[SIZE];
  int ii = 1;
  int sum=0;
  char * input;

  numberlist = fopen("numbers.txt", "r");
  while ( fgets(buffer, SIZE, numberlist) ) {
     input = strtok(buffer, " ");
     sum = 0;
     while(input != NULL) {
       sum += atoi(input);
       input = strtok(NULL, " ");
     }
     printf("[%d] sum=%d\n",ii,sum);
     ii++;
  }

  fclose(numberlist);

  return 0;
}
