#include <stdio.h>
int main() {
   int x;
   int space;
   int rows;
   int z = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (x = 1; x <= rows; ++x, z = 0) {
      for (space = 1; space <= rows - x; ++space) {
         printf("  ");
      }
      while (z != 2 * x - 1) {
         printf("* ");
         ++z;
      }
      printf("\n");
   }
   return 0;
}
