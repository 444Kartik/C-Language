#include <stdio.h>

int main() {

   int i, space;
   int rows, k = 0;

   printf("\n\n Pattern Printing - 3 :- \n");
   printf(" Enter the number of rows = ");
   scanf("%d", &rows);

   printf("\n");

 for (i = 1; i <= rows; ++i, k = 0) {
    for (space = 1; space <= rows - i; ++space) {
        printf("  "); }

    while (k != 2 * i - 1) {
        printf("* ");
        ++k; }

      printf("\n");
}

   printf("\n\n");


   return 0;
}
