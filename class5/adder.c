/* Add all numbers passed as command line arguments */

#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {
  int ii;
  int sum = 0;;

  /* skip argv[0] since it is the filename */
  for(ii=1;ii<argc;ii++) {
    /* for each argument convert to an int and add to the sum */
    /* note that this assumes the arguments are valid ints */
    sum = sum + atoi(argv[ii]);
  }

  printf ("%d\n", sum);
  return 0;
}
