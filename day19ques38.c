#include <stdio.h>
int main() {
//Q38: Write a program to find the sum of digits of a number.
int n, digit, sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0) {
digit = n % 10;
sum = sum + digit;
n = n / 10;
}
printf("Sum of digits = %d", sum);
return 0;
}
