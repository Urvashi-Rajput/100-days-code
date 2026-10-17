#include<stdio.h>
int main()
{
//Q78: Find the sum of main diagonal elements for a square matrix.
int a[10][10], r, c, i, j, sum = 0;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 0; i < r; i++)
        sum = sum + a[i][i];

    printf("%d", sum);

    return 0;
}
