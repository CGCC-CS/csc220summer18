#include<stdio.h>
#include<string.h>

#define SIZE 5

void gets_vs_fgets() {
   char str1[SIZE];
   char str2[SIZE];
   char str3[SIZE];

   strncpy(str1, "XXXX", SIZE);
   strncpy(str2, "YYYY", SIZE);
   strncpy(str3, "ZZZZ", SIZE);

   printf("str1: %s\n", str1);
   printf("str2: %s\n", str2);
   printf("str3: %s\n", str3);

   printf("\nEnter a string of 4 characters: ");
   /* This is the right way
   fgets(str2, SIZE, stdin);
   */
   /* This is dangerous! */
   gets(str2);

   printf("str1: %s\n", str1);
   printf("str2: %s\n", str2);
   printf("str3: %s\n", str3);
}


int main() {
   gets_vs_fgets();

   return 0;
}
