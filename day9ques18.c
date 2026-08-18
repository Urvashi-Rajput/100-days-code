#include<stdio.h>
int main()
{
//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
int marks;
printf("enter marks");
scanf("%d", &marks);
if(marks>=90 && marks<=100)
{
printf("grade a\n");
}
else if(marks>=80 && marks<=89)
{
printf("grade b\n");
}
else if(marks>=70 && marks<=79)
{
printf("grade c\n");
}
else if(marks>=60 && marks<=69)
{
printf("grade d\n");
}
else
{
printf("grade f\n");
}
return 0;
}

