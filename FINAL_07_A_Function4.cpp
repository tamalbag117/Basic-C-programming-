//7. a) The length and breadth of a rectangle 
//and radius of a circle are input through the keyboard.
// Write four different functions to calculate
// the area and perimeter of the rectangle,
// and the area and the circumference of the circle.
#include<stdio.h>
void areaRectangle(int l,int b){
	int area;
	area=l*b;
	printf("The area of the rectangle is :\t%d",area);
}
void perimeterRectangle(int l,int c){
	int a;
	a=2*(l+c);
	printf("\nThe perimeter of the rectangle is :\t%d",a);
}
void areaCircle(int r){
	int a;
	a=3.14*r*r;
	printf("\nThe are of the circle is :\t%d",a);
}
void cirCircle(int r){
	int a;
	a=2*3.14*r;
	printf("\nThe circumference of the circle:\t%d",a);
}
int main(){
	int l,b,r;
	printf("\nThe length of the rectangle:\t");
	scanf("%d",&l);
	printf("\nThe breadth of the rectangle:\t");
	scanf("%d",&b);
	printf("\nThe radious of circle:\t");
	scanf("%d",&r);
	areaRectangle(l,b);
	perimeterRectangle(l,b);
	areaCircle(r);
	cirCircle(r);
}
