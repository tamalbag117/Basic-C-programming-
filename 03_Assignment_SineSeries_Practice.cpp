/* the series s=x-x^3/3!+x^5/5!-x^7/7!+x^9-x^11/11!+......+x^n/n!,
we can see here common difference between two numbers are two(2)b
 or multiple of two ,
as 2==3-1=5-3=.......,6==2*3=9-3=12-6=......
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int number,x, i,j,temp,factorial=1;
	float sum=0;
	printf("enter the value of x \n & the number respectively:");
	scanf("%d%d",&x,& number);
	temp=2;
	/*here "temp" is a local 
	variable to chek the number is odd or even, it can be represent
	 by any even number like 2,4,6,8,10,12,......... */
	for(i=1;i<=(2*number);i=i+2)/*as if the number is going to increase 
	by 2 for every implementation of post increment of i */
	{
		for (j=1;j<=i;j++)
		{
			factorial=factorial*j;/*simple factorial calculation 
			using for loop 1!=1; (1*2*3)!=6,(1*2*3*4*5)!=120,....*/
		}
	if (temp%2==0)
	{
		sum=sum+(pow(x,i)/factorial);//when the number is event 
		}
		else
		{
			sum=sum-(pow(x,i)/factorial);//when the number is odd
		}	
	temp++;//to check even or odd number ,number+2;		
	}
printf("the sum of the given number is:%f",sum);
return 0;	
}
