#include<stdio.h>
int main()
{
//Q34: Write a program to check if a number is prime.
int n, i, flag = 0;
printf("Enter a number: ");
scanf("%d", &n);
for (i = 2; i < n; i++) {
if (n % i == 0) {
flag = 1;
break;
}
}
if (flag == 0 && n > 1)
printf("Prime number");
else
printf("Not a prime number");
return 0;
}
