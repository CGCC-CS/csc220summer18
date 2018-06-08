#include<stdio.h>
#include<string.h>

typedef int number;
typedef enum {FALSE, TRUE} boolean;
typedef enum {NUM1=3, NUM2=10} nums;
typedef struct {
  int n;
  char s[10];
  boolean finished;
} myStruct;

union myUnion {
  int x;
  char s[20];
};

void print_struct(myStruct *);

int main () {

  number k = 10;
  boolean done = FALSE;
  nums x = NUM1;
  myStruct m = {8, "Hello", FALSE};
  union myUnion u;

  printf("k=%d, done=%d, x=%d\n", k, done,x);
  print_struct(&m);
  printf("sizeof(myStruct) = %d\n", sizeof(myStruct));

  printf("sizeof(myUnion) = %d\n", sizeof(union myUnion));
  strncpy(u.s, "Hello, World!", 20);
  printf("u.s=%s\n", u.s);
  u.x = 0x4D6F6F6E;   /* Ascii value for M-o-o-n */
  printf("u.x=%d (or in hex %x)\n", u.x, u.x);
  printf("u.x=%d, u.s=%s\n", u.x, u.s);
 
  return 0;
}

void print_struct(myStruct * m) {
  printf("m.n=%d, m.s=%s, m.finished=%d\n", 
             m->n, m->s, m->finished);
}
