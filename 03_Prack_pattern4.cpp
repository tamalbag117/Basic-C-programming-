//pattern 4
#include<stdio.h>
int main() {
   int i, j, rows;
   char ch;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
    ch='A';
   for (i = 1; i <= rows; ++i) {
 	  for(j=1;j<=2*(rows-i);j++)
   	  	printf(" ");
      for (j = 1; j <= i; ++j) {
         printf("%c ",ch++);
      }
      printf("\n");
   }
   return 0;
}
