//Pointer to Stucture
#include<stdio.h>

typedef struct {
	int roll;
	char name[30];
	char dept[20];
	float grade;
}student;

int main(){
	student st1, *st;
	st=&st1; // st holds address of variable st1
	
	//Input
	printf("Enter roll no");
	scanf("%d",&st->roll);
	printf("Enter name");
	fflush(stdin);//clears the buffer; otherwise it may skip input name
	gets(st->name);
	printf("Enter department");
	fflush(stdin);
	gets(st->dept);
	printf("Enter grade");
	scanf("%f",&st->grade);
	
	//Output
	printf("\n\nStudents information is:\n");
	printf("%d %s %s %f",st->roll,st->name,st->dept,st->grade);

	return 0;
	
}
