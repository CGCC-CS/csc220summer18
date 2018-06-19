#include<stdio.h>

/* compile with gcc -DDEBUG debug.c to get debug logs */

void printDebug(char *, int, int);

int main()
{
  int ii, x=10, y=0;
  printDebug("  DEBUG",1,x);

  for (ii=0;ii<4;ii++) /*first */
    y++;

  for (ii=0;ii<4;ii++){ /*second */
    printDebug("  DEBUG",2,x);
    printf("%d: %d\n",ii,x);
    x+=y;
    printDebug("  DEBUG",3, x);
  }
  return 0;
}

void printDebug(char * str, int n, int val) {
#ifdef DEBUG
    printf("  %s %d %d\n",str, n, val);
#endif
}
