#include<stdio.h>
#include<math.h>
int main()
{
//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
float p,r,t;
printf("enter p");
scanf("%f", &p);
printf("enter r");
scanf("%f", &r);
printf("enter t");
scanf("%f", &t);
printf("simple interest is %f\n", (p*r*t)/100);
printf("compound interest is %f\n", p*pow(1+r/100,t)-p);
return 0;
}

