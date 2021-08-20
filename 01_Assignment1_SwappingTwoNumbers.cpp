/*Two numbers are input through a keyboard into two locations. Write
a program to interchange the contents of the two variables.*/
#include<stdio.h>
int main(){
	int first_number,second_number,*ptr1,*ptr2,temp;
	printf("Enter the two numbers\n");
	printf("first number:\t");
	scanf("%d",&first_number);
	printf("\nsecond number:\t");
	scanf("%d",&second_number);
	ptr1=&first_number;
	ptr2=&second_number;
	temp=*ptr2;
	*ptr2=*ptr1;
	*ptr1=temp;
	printf("after swapping the two numbers are :\t %d and \t %d",first_number,second_number);
}
/* here we can also use bitwise operator to reduce space complexity:
#include<stdio.h>
int main(){
	int first_number,second_number;
	printf("Enter the two numbers\n");
	printf("first number:\t");
	scanf("%d",&first_number);
	printf("\nsecond number:\t");
	scanf("%d",&second_number);
	first_number = first_number ^ second_number;
	second_number = first_number ^ second_number;
	first_number = first_number ^ second_number;
	printf("after swapping the two numbers are :\t %d and \t %d",first_number,second_number);
}
*/
