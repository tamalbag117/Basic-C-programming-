//pattern 3
#include<stdio.h>
int main() {
   int i, j, rows,c;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
   	  c=i;
      for (j = 1; j <= i; ++j) {
         printf("%-3d",c++);
      }
      printf("\n");
}
   return 0;
}
