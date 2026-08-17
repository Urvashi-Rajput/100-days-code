#include<stdio.h>
int main()
{
//Q4: Write a program to calculate the area and circumference of a circle given its radius.
int radius; float pi=3.14;
printf("enter radius");
scanf("%d", & radius);
printf("area is %f\n", 3.14*radius*radius);
printf("circumference is %f\n", 2*3.14*radius);
return 0;
}
