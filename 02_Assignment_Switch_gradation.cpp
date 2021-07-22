//Gradation Calulator switch
#include<stdio.h>
int main(){
	int marks;
	printf("The obtaning marks of the student is:\t");
	scanf("%d",&marks);
	printf("\n your grade is:\t");
	if(marks==100){
	marks=99;
	}
	switch(marks/10)
	{
		case 9:
		printf("O");
		break;
		case 8:
			printf("E");
			break;
			case 7:
			printf("A");
			break;
			case 6:
			printf("B");
			break;
			case 5:
			printf("C");
			break;
			case 4:
			printf("D");
			break;
			case 3:
			case 2:
			case 1: 
			case 0:
			printf("Fail");
			break;
			default: 
			printf("invalid");
		    break;
	}
}
