#include<stdio.h>
int main()
{
//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
int x;
printf("enter a no 0-7; ");
scanf("%d", &x);
switch(x)
{
case 1:
printf("monday\n");
break;
case 2:
printf("tuesday\n");
break;
case 3:
printf("wednesday\n");
break;
case 4:
printf("thursday\n");
break;
case 5:
printf("friday\n");
break;
case 6:
printf("satirday\n");
break;
case 0:
case 7:
printf("sunday\n");
break;
default:
printf("invalid number\n");
}
return 0;
}
