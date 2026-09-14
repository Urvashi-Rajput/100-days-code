#include <stdio.h>
int main()
{
//Q31: Write a program to take a number as input and print its equivalent binary representation.
int n, rem, bin = 0, place = 1;
printf("Enter number: ");
scanf("%d", &n);
while(n > 0)
{
rem = n % 2;
bin = bin + rem * place;
place = place * 10;
n = n / 2;
}
printf("Binary = %d", bin);
return 0;
}
