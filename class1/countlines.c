#include<stdio.h>

/* 
 * Enter control-d to pass an EOF character to input 
 */
int main() {
  int c; /* input character */
  int nl = 0; /* counter for number of lines */

  /* While the input character is not the End of File Character */
  while ( (c = getchar()) != EOF) {
    /* If the input character is a newline, increment the counter */
    if (c == '\n') {
      nl ++;
    }
  }

  printf ("There were %d newlines \n", nl);
  return 0;
}
