#include<stdio.h>
int main()
{
//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
int n, i;
float sum = 0, num, den;
printf("Enter number of terms: ");
scanf("%d", &n);
sum = 1;
num = 3;
den = 4;
for (i = 2; i <= n; i++) {
sum = sum + num / den;
num = num + 2;
den = den + 2;
}
printf("Sum = %.2f", sum);
return 0;
}
