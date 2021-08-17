/* decimal to roman number convertion
I created this program to convert decimal number into binary number
suppose user input : 5 so it should show user V
or if user input the number 17 so it should show user out put as : xvii
Time complexity of this program : O(1), that's means it execute in constant time 
we use if else operator 
to execute the program correctly
*/

#include <stdio.h>
int main()
{
int number;
printf("print the decimal number: ");
scanf("%d", &number);
printf("Roman number: ");
while(number != 0)
{
if (number >= 1000)
{
printf("m");
number -= 1000;
}
else if (number >= 900)
{
printf("cm");
number -= 900;
}
else if (number >= 500)
{
printf("d");
number -= 500;
}
else if (number >= 400)
{
printf("cd");
number -= 400;
}

else if (number >= 100)
{
printf("c");
number -= 100;
}
else if (number >= 90)
{
printf("xc");
number -= 90;
}
else if (number >= 50)
{
printf("l");
number -= 50;
}
else if (number >= 40)
{
printf("xl");
number -= 40;
}
else if (number >= 10)
{
printf("x");
number -= 10;
}
else if (number >= 9)
{
printf("ix");
number -= 9;
}

else if (number >= 5)
{
printf("v");
number -= 5;
}
else if (number >= 4)
{
printf("iv");
number -= 4;
}
else if (number >= 1)
{
printf("i");
number -= 1;
}
}
return 0;
}
