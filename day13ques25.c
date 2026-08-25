#include<stdio.h>
int main()
//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
{
int a,b;
char op;
printf("enter two numbers: ");
scanf("%d %d", &a, &b);
printf("enter op(+, -, *, /, %%) : ");
scanf(" %c ", &op);
switch(op)
{
case'+':
printf("result=%d",a+b);
break;
case'-':
printf("result=%d",a-b);
break;
case'*':
printf("result=%d",a*b);
break;
case'/':
printf("result=%d",a/b);
break;
case'%':
printf("result=%d",a%b);
break;
default:
printf("invalid operator");
}
return 0;
}
