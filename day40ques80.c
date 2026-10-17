#include<stdio.h>
int main()
{
//Q80: Multiply two matrices.
 int a[10][10], b[10][10], r1, c1, r2, c2;
    int i, j, k, sum;

    scanf("%d %d", &r1, &c1);

    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);

    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            sum = 0;

            for(k = 0; k < c1; k++)
                sum = sum + a[i][k] * b[k][j];

            printf("%d ", sum);
        }

        printf("\n");
    }

    return 0;
}
