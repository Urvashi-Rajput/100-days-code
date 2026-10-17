#include<stdio.h>
int main()
{
//Q66: Insert an element in a sorted array at the appropriate position.
int n, a[100], x, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    i = n - 1;

    while(i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = x;

    for(j = 0; j < n + 1; j++)
        printf("%d ", a[j]);

    return 0;
}
