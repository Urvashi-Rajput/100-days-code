#include <stdio.h>
int main()
{
//Q31: Write a program to take a number as input and print its equivalent binary representation.
int n, rem;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0)
{
rem = n % 2;
printf("%d", rem);
n = n / 2;
}
return 0;
}
