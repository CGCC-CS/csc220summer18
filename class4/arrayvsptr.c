#include<stdio.h>
 
#define COUNT 16

void print_array(char ar[], int size) {
  int ii;
  for(ii=0;ii<size;ii++)
    printf("%2d: ar[%2d]=%c\n", ii, ii, ar[ii]);
  printf("Size of ar: %lu\n", sizeof(ar)); 
}

void print_pointer(char * p, int size) {
  int ii;
  for(ii=0;ii<size;ii++)
    printf("%2d: *(p+%2d)=%c\n", ii, ii, *(p+ii));
  printf("Size of p: %lu\n", sizeof(p)); 
}

int main() {
  char array[] = "ABCDEFGHIJKLMNOP"; /* int array */
  int nums[COUNT];
  char * ptr = "ABCDEFGHIJKLMNOP";   /* pointer to int */
  int ii;
   
  printf("Sizes: array: %lu,  ptr: %lu,  nums: %lu\n", sizeof(array), sizeof(ptr), sizeof(nums)); 

  for(ii=0;ii<COUNT;ii++)
    nums[ii]=ii;
  for(ii=0;ii<COUNT;ii++)
     printf("array[%2d]=%c *(ptr+%d)=%c, nums[%2d]=%2d\n", ii, array[ii], ii, *(ptr+ii), ii, nums[ii]);

  printf("\nprint_array(array, COUNT)\n");
  print_array(array, COUNT);
  printf("\nprint_array(ptr, COUNT)\n");
  print_array(ptr, COUNT);
  printf("\nprint_array(&array[0], COUNT)\n");
  print_array(&array[0], COUNT);

  printf("\n\nprint_pointer(array, COUNT)\n");
  print_pointer(array, COUNT);
  printf("\nprint_pointer(ptr, COUNT)\n");
  print_pointer(ptr, COUNT);
  printf("\nprint_pointer(&array[0], COUNT)\n");
  print_pointer(&array[0], COUNT); 

  /* array indexing */
  printf("\n\narray indexing:\n  ");
  for(ii=0;ii<5;ii++) {
    printf("%d ", array[ii]);
  }
  printf("\n");

  /* pointer arithmetic */
  printf("pointer arithmetic:\n  ");
  for(ii=0;ii<5;ii++) {
    printf("%d ", *(ptr+ii));
  }
  printf("\n");

  /* array indexing with pointer variable */
  printf("\narray indexing with pointer variable:\n  ");
  for(ii=0;ii<5;ii++) {
    printf("%d ", ptr[ii]);
  }
  printf("\n");

  /* pointer arithmetic with an array name */
  printf("pointer arithmetic with an array name:\n  ");
  for(ii=0;ii<5;ii++) {
    printf("%d ", *(array+ii));
  }
  printf("\n");

  printf("Are arrays and pointers the same?\n");
  printf("  size of arr=%lu\n", sizeof(array));
  printf("  size of ptr=%lu\n", sizeof(ptr));

  ptr=&ii;
  /*
  *   array=&ii;  Not allowed!
  */

  return 0;
}
