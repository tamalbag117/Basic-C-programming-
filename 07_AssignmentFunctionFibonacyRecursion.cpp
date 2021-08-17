//Fibonacy Series Recursion//
/*
Fibonacci number
In mathematics, the Fibonacci numbers, commonly denoted Fn, form a sequence,
called the Fibonacci sequence, such that each number is the sum of the two preceding ones,
starting from 0 and 1. That is,[1]

{ F_{0}=0,F_{1}=1,}{ F_{0}=0, F_{1}=1,}
and
{F_{n}=F_{n-1}+F_{n-2}}{F_{n}=F_{n-1}+F_{n-2}}
for n > 1.
The sequence starts:[2]
a series of numbers in which each number ( Fibonacci number ) 
is the sum of the two preceding numbers.
The simplest is the series 1, 1, 2, 3, 5, 8, etc.

Under some older definitions, the value { F_{0}=0}F_{0}=0 is omitted, 
so that the sequence starts with { F_{1}=F_{2}=1,}{ F_{1}=F_{2}=1,} 
and the recurrence {F_{n}=F_{n-1}+F_{n-2}}{ F_{n}=F_{n-1}+F_{n-2}} 
is valid for n > 2.[3][4] In his original definition, 
Fibonacci started the sequence with
{ F_{1}=1,F_{2}=2}{ F_{1}=1,F_{2}=2}
*/
#include<stdio.h>
long long int sum(int n)
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
	int n;

	printf("Enter The N th Term Of the series : ");

	scanf("%d",&n);

    printf("The sum up to the %d  Terms is : %lld",n,sum(n));

    return 0;
}
