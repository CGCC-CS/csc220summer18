#include <stdio.h>
#include "myFile.h"

extern int myNum;

int main()
{
   int x = 10;
   int y = addone(x);

   init();

   printf ("x=%d, y=%d\n",x,y);  
   printf ("addone(x)=%d\n",addone(x+10));  

   doubleIt(&x);
   printf ("x=%d, y=%d\n",x,y);  

   printf("4! = %d\n", factorial(4));
   printf("x! = %d\n", factorial(x));

   x = 40;
   printf("4! = %d\n", factorial(4));
   printf("x! = %d\n", factorial(x));
  
   printf("Total calls: %d\n",myNum);

   return 0;
}

