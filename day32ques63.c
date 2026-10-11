#include <stdio.h>

int main()
{
//Q63: Merge two arrays.
    int a[100], b[100], c[200];
    int n, m, i, j = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[j] = a[i];
        j++;
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        c[j] = b[i];
        j++;
    }

    for(i = 0; i < j; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
