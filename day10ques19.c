#include<stdio.h>
int main()
{
//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
int a, b, c;
printf("enter a, b and c");
scanf("%d %d %d", &a, &b, &c);
if(a==b && b==c && c==a)
{
printf("equilateral\n");
}
else if(a != b && b != c && a != c)
{
printf("scalene\n");
}
else
{
printf("isosceles\n");
}
return 0;
}
