#include <stdio.h>
int main() {
   int b, i, j, number = 1;
   printf("Enter rows: ");
   scanf("%d", &b);
   for (i = 1; i <= b; i++) {
      for (j = 1; j <= i; j++) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
}

