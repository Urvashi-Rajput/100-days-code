#include<stdio.h>
#include<math.h>
int main()
{
//Q17: Write a program to find the roots of a quadratic equation and categorize them.
float a,b,c,d,r1,r2;
printf("enter a, b, c");
scanf("%f %f %f", &a, &b, &c);
d=b*b-4*a*c;
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("two distinct real roots\n");
printf("root 1= %.2f\n", r1);
printf("root 2= %.2f\n", r2);
}
else if(d==0)
{
r1=-b/(2*a);
printf("two equal real roots\n");
printf("root1=root2=%.2f\n",r1);
}
else
{
printf("roots are imaginary\n");
}
return 0;
}
