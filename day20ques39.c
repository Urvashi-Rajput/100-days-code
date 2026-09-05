#include <stdio.h>
int main() {
//Q39: Write a program to find the product of odd digits of a number.
int n, d, product = 1;
printf("Enter a number: ");
scanf("%d", &n);
while (n != 0) {
d = n % 10;
if (d % 2)
product = product * d;
n = n / 10;
}
printf("Product = %d", product);
return 0;
}
