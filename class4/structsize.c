/* Example of struct sizing */

#include<stdio.h>

/* User defined types with 3 ints & 4 chars */

/* all ints & chars grouped together */
struct tightstruct{
  int num1;
  int num2;
  int num3;
  char char1;
  char char2;
  char char3;
  char char4;
};

/* alternating char int - since ints must be word aligned each int 
 *   will start after 3 bytes of char padding, wasting 3 bytes
 */
struct loosestruct{
  char char1;
  int num1;
  char char2;
  int num2;
  char char3;
  int num3;
  char char4;
};

/* bitfield example */
struct bitf {
    int a : 10;  /* 10 bit int */
    int b : 5;   /* 5 bit int */
    int c : 1;   /* 1 bit int */
    int d : 8;   /* 8 bit int */
    int e : 4;   /* 4 bit int */
    int f : 4;   /* 4 bit int */
};

int main() {
    struct tightstruct tstruct = {0,1,2,'A','B','C','D'};
    struct loosestruct lstruct = {'A',0,'B',1,'C',2,'D'};

    struct bitf bitfield = {7, 2, 1, 7, 2, 3};

    printf ("Size of tightstruct = %d\n", sizeof(struct tightstruct));
    printf ("Size of loosestruct = %d\n", sizeof(struct loosestruct));
    printf ("Size of bitfield = %d\n", sizeof(struct bitf));

    return 0;
}

