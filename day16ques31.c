#include <stdio.h>
int main()
{
int n, rem;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0)
{
rem = n % 2;
printf("%d", rem);
n = n / 2;
}
return 0;
}
