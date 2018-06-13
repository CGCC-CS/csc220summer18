#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]) {
  int sum = 0;
  int ii=1;

  if (argc>=2) {
    while (ii<argc) {
      sum += atoi(argv[ii]);
      ii++;
    }
    printf("%d\n", sum);
  }
  else {
  fprintf(stderr, "Pass at least one number!\n");
  }
  
  return 0;
}
