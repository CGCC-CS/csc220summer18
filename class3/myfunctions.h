#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

/* symbolic constants */
#define MULTIPLE 7
#define SIZE 10

/* inline function */
#define MAX(A,B)  (((A) > (B)) ? (A) : (B))

void init(void);
int addone(int n);
void doubleIt(int * n);
int factorial(int n);
#endif
