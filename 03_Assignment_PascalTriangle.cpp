/*Pascal Triangle*/
#include<stdio.h>
int factorial(int a)
{
int fact=1;
for(int i=1;i<=a;i++)
{
fact=fact*i;
}
return fact;
}
int main()
{
    int num,i,j,k,p;
    printf("enter the range:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(k=0;k<num-i;k++)
        {
            printf("\t");
        }
        for(j=0;j<=i;j++)
        {
          p=factorial(i)/((factorial(j)*factorial(i-j)));
          printf("\t\t%d",p); 
        }
        printf("\n");
    }
}
