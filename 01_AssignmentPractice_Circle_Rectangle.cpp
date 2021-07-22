/*The length and breadth of a rectangle and radius of a circle are
input through keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and the
circumference of the circle*/
#include<stdio.h>
#include<math.h>
int main(){
	float breadth,length,radius;
	printf("The length and breadth of the rectangle is :\n");
	scanf("%f%f",&length,&breadth);
	printf("The radious of the circle is:\t");
	scanf("%f",&radius);
	printf("\narea of the rectangle is:\t%f\n perimeter of the rectangle is:\t%f",(length*breadth),2*(length+breadth));
	printf("\narea of circle :\t%f\ncircumference of the circle is:\t%f",3.14*pow(radius,2),2*3.14*radius);
}
