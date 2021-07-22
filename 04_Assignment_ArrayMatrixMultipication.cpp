#include <stdio.h>
 
int main()
{
  int m, n, p, q, i, j, k, sum = 0;
  int a[10][10], b[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of a matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of a matrix\n");
 
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
 
  printf("Enter number of rows and columns of b matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of b matrix\n");
 
    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
        scanf("%d", &b[i][j]);
 
 
  //Multiplication
     printf("Product of the matrices:\n");
    for (i = 0; i < m ; i++) {
      for (j = 0; j < q ; j++) {
      	sum = 0;
        for (k = 0; k < n ; k++) { // p=n
          sum = sum + a[i][k]*b[k][j];
        }
 
        multiply[i][j] = sum;
        printf("%d\t", multiply[i][j]);
      }
      printf("\n");
    }
   
}// end of else
  return 0;
}
