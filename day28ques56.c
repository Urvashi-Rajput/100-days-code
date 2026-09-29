#include<stdio.h>
int main(){
int a[100],i,n;
scanf("%d", &n);
//reading the arrays
for(i=0; i<n; i++)
scanf("%d", &a[i]);
//printing the arrays
for(i=0; i<n; i++)
printf("%d\t", a[i]);
return 0;
}
