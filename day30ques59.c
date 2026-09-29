#include<stdio.h>
int main()
{
int a[100],i,n;
int even=0,odd=0;
scanf("%d", &n);
for(i=0; i<n; i++){
scanf("%d", &a[i]);
if(a[i]%2==0){
even++;
}
else{
odd++;
}
}
printf("even=%d, odd=%d", even, odd);
return 0;
}

