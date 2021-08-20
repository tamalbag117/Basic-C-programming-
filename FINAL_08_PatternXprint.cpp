/*8. a) Write a C program to print 
the following pattern,
take number of rows as input:
x x x x
  x x x
    x x
      x */
#include<stdio.h>
int main() {
   int i, j,k ,rows;
   printf("Enter the number of rows:\t");
   scanf("%d",&rows);
  for(i=1;i<=rows;i++){
  	for(j=1;j<i;j++){
  		printf(" ");
	  }
	for(k=i;k<=rows;k++){
		printf("x");
	}
	printf("\n"); 
  }
   return 0;
}
