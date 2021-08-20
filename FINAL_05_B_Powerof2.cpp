//b) . Write a C function to check whether 
//an integer number is power of 2 or not.
#include<stdio.h>
int main(){
int number,count=0,temp;
printf("enter the number:\t");
scanf("%d",&number);
temp=number;
while(temp!=1)
{
	if(temp%2!=0){
		count=1;
		break;
	}
	temp=temp/2;
}
if(count==0){
	printf("%d is power of 2",number);
}
else{
	printf("%d is not the power of 2",number);
}
return 0;
}
