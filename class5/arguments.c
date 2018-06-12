#include<stdio.h>

int main(int argc, char * argv[]) {
  int ii;
  int num1, num2;

  printf("argc =  %d\n", argc);
  for(ii=0;ii<argc;ii++) 
     printf("argv[%d] =  %s\n", ii, argv[ii]);

  if (argc == 3) {
     num1 = atoi(argv[1]); 
     num2 = atoi(argv[2]); 
     printf("%d + %d = %d\n", num1, num2, (num1 + num2)); 
  }
  else {
     printf ("I can only add 2 numbers");
  }
  return 0;
}
