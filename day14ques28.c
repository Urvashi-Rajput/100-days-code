#include <stdio.h>
int main()
{
//Q28: Write a program to print the product of even numbers from 1 to n.
int n, i, sum = 0;
printf("Enter n: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
sum = sum + (2 * i);
}
printf("Sum = %d", sum);
return 0;
}
