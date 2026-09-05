#include<stdio.h>
int main(){
//Q41: Write a program to swap the first and last digit of a number.
int n, original, first, last, p = 1, middle, result;
printf("Enter a number: ");
scanf("%d", &n);
original=n;
last =n%10;
while (n >= 10) {
n = n / 10;
p = p * 10;
}
first = n;
middle = original-first*p-last;
result = last * p + middle+first;
printf("Number after swapping = %d", result);
return 0;
}
