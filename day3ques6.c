#include<stdio.h>
int main()
{
//Q6: Write a program to swap two numbers using a third variable.
int a,b,c;
printf("enter a");
scanf("%d", &a);
printf("enter b");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("after swapping a %d\n",a);
printf("after swapping b %d\n",b);
return 0;
}
