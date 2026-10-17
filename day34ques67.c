#include<stdio.h>
int main()
{
//Q67: Insert an element in an array at a given position.
 int n, a[100], pos, x, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &pos, &x);

    for(i = n - 1; i >= pos; i--)
        a[i + 1] = a[i];

    a[pos] = x;

    for(i = 0; i < n + 1; i++)
        printf("%d ", a[i]);

    return 0;
}
