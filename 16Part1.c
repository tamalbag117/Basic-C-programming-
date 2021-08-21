#include<stdio.h>

int sum(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;

	else
		return sum(n-1)+sum(n-2);

}


int main()
{
	int n,j=0;

	printf("Enter The N th Term Of the series : ");

	scanf("%d",&n);

	for (int  i = 1 ; i <= n ; i++ )
   {
      printf("%d ", sum(j));
      j++; 
   }

    return 0;
}