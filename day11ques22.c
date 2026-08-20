#include<stdio.h>
int main()
{
//Q22: Write a program to find profit or loss percentage given cost price and selling price.
float cp, sp, profit, loss;
printf("enter cp: ");
scanf("%f", &cp);
printf("enter sp: ");
scanf("%f", &sp);
if(sp>cp)
{
printf("profit= %.2f\n",sp-cp);
printf("profit percentage= %.2f%%\n", ((sp-cp)/cp)*100);
}
else if(sp<cp)
{
printf("loss= %.2f\n", cp-sp);
printf("loss percentage= %.2f%%\n", ((cp-sp)/cp)*100);
}
else
{
printf("no profit,no loss\n");
}
return 0;
}
