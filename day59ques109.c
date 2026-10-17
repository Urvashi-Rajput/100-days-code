#include<stdio.h>
int main()
{
//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
int arr[100], n = 0, k, i, j, sum, max;
    char ch;

    scanf(" arr[");

    while(1)
    {
        scanf("%d", &arr[n]);
        n++;

        ch = getchar();

        if(ch == ']')
            break;
    }

    scanf(" = , k = %d", &k);

    if(k <= 0 || k > n)
    {
        printf("-1");
        return 0;
    }

    max = 0;

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(i == 0 || sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}
