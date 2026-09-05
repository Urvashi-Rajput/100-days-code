#include <stdio.h>
int main() {
//Q37: Write a program to find the LCM of two numbers.
int a, b, i, lcm;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
for (i = 1; i <= a * b; i++) {
if (i % a == 0 && i % b == 0) {
lcm = i;
break;
}
}
printf("LCM = %d", lcm);
return 0;
}
