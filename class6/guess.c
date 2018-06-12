/* To compile:
     gcc -DSECRETNUM=10 guess.c
     gcc -DSECRETNUM=20 -DDEBUG guess.c
*/
#include<stdio.h>

int main() {

  int num;
  printf ("Guess the number: ");
  scanf ("%d", &num);

  #ifdef DEBUG
  printf ("--- guess=%d, actual=%d ---\n", num, SECRETNUM);
  #endif

  if (num==SECRETNUM) {
    printf ("You guessed right!\n");
  }
  else {
    printf("Nope!  You are bad at this game!\n");
  }

  return 0;
}
