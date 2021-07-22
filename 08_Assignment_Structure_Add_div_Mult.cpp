/*Define a structure “complexNo”, which contains two members-
one real part and one imaginary part of complex number. Now perform-


i)                   
Addition of two complex numbers.


ii)                  
Subtraction of two complex numbers.


iii)                
Multiplication of two complex numbers.*/
#include<stdio.h>
struct complexNo{
float original;
float originalx;
float originaly;
float image ;
float imagex;
float imagey;
};
struct complexNo complexNo1,complexNo2;
struct complexNo sum_complexNolex(struct complexNo complexNolex1,struct
complexNo complexNolex2){
struct complexNo temp;
temp.original = complexNolex1.original + complexNolex2.original;
temp.originalx = complexNolex1.originalx - complexNolex2.originalx;
temp.originaly = complexNolex1.originaly * complexNolex2.originaly;
temp.image = complexNolex1.image + complexNolex2.image;
temp.imagex = complexNolex1.imagex - complexNolex2.imagex;
temp.imagey = complexNolex1.imagey * complexNolex2.imagey;
return temp;
}
int main(){
struct complexNo result;
printf(" Enter The two Number: ");
printf("Enter complexNolex Number 1: ");
scanf("%f%f",&complexNo1.original, &complexNo1.image);
printf("Enter complexNolex Number 2: ");
scanf("%f%f",&complexNo2.original,&complexNo2.image);
result = sum_complexNolex(complexNo1,complexNo2);
printf("Addition of two complex numbers");
printf("The sum is %f + i%f\n", result.original,result.image);
printf("Subtraction of two complex numbers.");
printf("The substraction is %f - i%f\n", result.originalx,result.imagex);
printf("Multiplication of two complex numbers.");
printf("The multiplication is %f * i%f\n", result.originaly,result.imagey);
return 0;
}
