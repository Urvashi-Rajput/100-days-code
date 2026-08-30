#include <stdio.h>
int main()
{
//Q30: Write a program to reverse a given number.
int n, reverse = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n != 0)
{
reverse = reverse * 10 + n % 10;
n = n / 10;
}
printf("Reverse = %d", reverse);
return 0;
}
