#include <stdio.h>
int main()
{
//Q26: Write a program to print numbers from 1 to n.
int n, i;
printf("Enter n: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
printf("%d\n", i);
}
return 0;
}
