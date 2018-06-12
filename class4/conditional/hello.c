/* 
 * Example of using conditional compilation to create 2 executables.
 *
 * If MORNING is defined at compile time, the program prints "Good Morning"
 * otherwise it prints "Hello"
 */

#include<stdio.h>

int main() {

#ifndef MORNING
  printf("Hello, world!\n");
#else
  printf("Good morning, world!\n");
#endif
}

