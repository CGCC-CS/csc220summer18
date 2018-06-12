#include<stdio.h>

int main(int argc, char * argv[]) {
  int ii = 1;
  int sum = 0;
  int num;

  if (argc >= 2) {
     while (ii < argc) {
       num = atoi(argv[ii]); 
       printf("%d + ", num); 
       sum += num;
       ii++;
     }
     /* backspace 3 times (ascii 8), then print sum */
     printf ("%c%c%c = %d\n", 8, 8, 8, sum);
  }
  else {
     printf ("I need at least one");
  }
  return 0;
}
