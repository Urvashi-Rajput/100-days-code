#include<stdio.h>
int main()
{
//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
int h,m,s;
printf("enter s");
scanf("%d", &s);
printf("%dh:%dm:%ds", s/3600, (s%3600)/60,s%60);
return 0;
}

