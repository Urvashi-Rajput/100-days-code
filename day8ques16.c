#include<stdio.h>
int main()
{
//Q16: Write a program to input three numbers and find the largest among them using if–else.
int a,b,c;
printf("entera a");
scanf("%d", &a);
printf("enter b");
scanf("%d", &b);
printf("enter c");
scanf("%d", &c);
if(a>b && a>c){
printf("a is largest");
}
else if(b>a && b>c){
printf("b is largest");
}
else{
printf("c is largest");
}
return 0;
}
