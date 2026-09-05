#include <stdio.h>
int main() {
//Q40: Write a program to find the 1’s complement of a binary number and print it.
int n, digit, p = 1;
printf("Enter a binary number: ");
scanf("%d", &n);
while (n / p >= 10)
p = p * 10;
while (p > 0){
digit = n / p;
n = n % p;
p = p / 10;
if (digit == 0)
printf("1");
else
printf("0");
}
return 0;
}
