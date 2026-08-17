#include<stdio.h>
int main()
{
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
int l,b;
printf("enter l");
scanf("%d", & l);
printf("enter b");
scanf("%d", & b);
printf("perimeter is %d\n", 2*(l+b));
printf("area is %d\n", l*b);
return 0;
}
