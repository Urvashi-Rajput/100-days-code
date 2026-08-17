#include<stdio.h>
int main()
{
//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
int n;
printf("enter n");
scanf("%d", &n);
if(n>=0)
{
if(n==0)
{
printf("number is zero\n");
}
else
{
printf("number is positive\n");
}
}
else
{
printf("number is negative\n");
}
return 0;
}
