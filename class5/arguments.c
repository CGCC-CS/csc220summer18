#include<stdio.h>
int main(int argc, char * argv[]) {
  
  int ii;

  printf("argc = %d\n", argc);
  for(ii=0;ii<argc;ii++) {
    printf("argv[%d] = %s\n", ii, argv[ii]);
  } 
  return 0;
}
