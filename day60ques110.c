#include<stdio.h>
int main()
{
/*Q110: Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the maximum element in each subarray of size k moving from left to right.
 Print the maximum elements for each window separated by spaces as output.
*/
 int arr[100], n = 0, k, i, j, max;
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

    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for(j = i + 1; j < i + k; j++)
        {
            if(arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);

        if(i < n - k)
            printf(" ");
    }

   return 0;
}
