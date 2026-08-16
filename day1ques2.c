#include <stdio.h>
int main()
{
//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
int a,b;
printf("enter a");
scanf("%d", & a);
printf("enter b");
scanf("%d", & b);
int sum= a+b;
printf("sum is :%d\n", sum);
int quotient= a/b;
printf("quotient is :%d\n", quotient);
int product=a*b;
printf("product is :%d\n", product);
int difference =a-b;
printf("difference is :%d\n", difference);
return 0;
}
