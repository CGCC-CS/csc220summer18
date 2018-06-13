#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * allocate_string(const char * str);

struct my_struct {
  int a;
  char * b;
};

int main() {
  char *ptr;
  char fence[] = "XXXXXXXXXXXXXXXXXXX";
  int *nums;
  struct my_struct * thing;
  int ii;

  ptr = malloc(10);    /* Allocate 10 bytes */
  if (ptr == NULL) {
    fputs("Error allocating memory for ptr.\n", stderr);
  }

  strncpy(ptr, "Goodbye!", 9);
  puts(ptr);
  free(ptr);

  ptr = allocate_string("This is a test.");
  printf("ptr=%p len=%d  string=%s\n", (void *) ptr, strlen(ptr), ptr);
  free(ptr);
  ptr = allocate_string(fence);
  printf("ptr=%p len=%d  string=%s\n", (void *) ptr, strlen(ptr), ptr);
  free(ptr);
  ptr = allocate_string("S");
  printf("ptr=%p len=%d  string=%s\n", (void *) ptr, strlen(ptr), ptr);
  free(ptr);
  ptr = allocate_string("This is a very long string to be allocating.  I need to by more RAM!");
  printf("ptr=%p len=%d  string=%s\n", (void *) ptr, strlen(ptr), ptr);
  free(ptr);

  /* malloc does not "clean" the memory */
  ptr = malloc(20);
  printf("%p: ", (void *) ptr);
  for(ii=0;ii<20;ii++) {
    printf("%d ", *(ptr+ii));
  }
  printf("\n");
  
  /* calloc does not "clean" the memory */
  ptr = calloc(20, sizeof(char));
  printf("%p: ", (void *) ptr);
  for(ii=0;ii<20;ii++) {
    printf("%d ", *(ptr+ii));
  }
  printf("\n");
  

  nums = malloc(10 * sizeof(int));
  thing = malloc(10 * sizeof(struct my_struct));
  for(ii=0;ii<10;ii++) {
     *(nums+ii) = 10 * ii; 
  }
  thing->a = 30;
  thing->b =  allocate_string("Name Here");
  printf("[%d] Num: %d, b=%s\n", sizeof(thing), thing->a, thing->b);
  for(ii=0;ii<10;ii++) {
     printf("%d ", *(nums + ii));
  }
  printf("\n");
  free(nums);
  free(thing);
  
  return 0;
}

char * allocate_string(const char * str) {
  int size = strlen(str) + 1;
  char * ptr = malloc(size * sizeof(char));
  if (ptr == NULL) {
    fputs("Error allocating memory for ptr.\n", stderr);
  }
  else {
    strncpy(ptr, str, size);
  }
  return ptr;
}


