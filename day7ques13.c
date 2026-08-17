#include<stdio.h>
int main()
{
//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
int year;
printf("enter year");
scanf("%d", &year);
if(year%400==0){
printf("leap year");
}
else if(year%100==0){
printf("not a leap year");
}
else if(year%4==0){
printf("leap year");
}
else{
printf("not a leap year");
}
return 0;
}
