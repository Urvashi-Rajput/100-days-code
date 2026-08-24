#include<stdio.h>
int main()
{
/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/
int days,fine;
printf("enter late days: ");
scanf("%d", &days);
if(days<=5)
{
printf("fine=rs.%d",2*days);
}
else if(days<=10)
{
printf("fine=rs.%d", 10+(days-5)*4);
}
else if(days<=30)
{
printf("fine=rs.%d", 30+(days-10)*6);
}
else
{
printf("membership cancelled");
}
return 0;
}
