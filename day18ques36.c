#include <stdio.h>
int main() {
//Q36: Write a program to find the HCF (GCD) of two numbers.
int a, b, i, hcf;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
for (i = 1; i <= a && i <= b; i++) {
if (a % i == 0 && b % i == 0) {
hcf = i;
}
}
printf("HCF= %d", hcf);
return 0;
}
