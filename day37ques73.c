#include<stdio.h>
int main()
{
//Q73: Find the sum of each row of a matrix and store it in an array.
int a[10][10], sum[10], r, c, i, j;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        sum[i] = 0;

        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            sum[i] = sum[i] + a[i][j];
        }
    }

    for(i = 0; i < r; i++)
        printf("%d ", sum[i]);

    return 0;
}
