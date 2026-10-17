#include<stdio.h>
int main()
{
/*Q102: Write a Program to take a sorted array arr[] and an integer x as input,
 find the index (0-based) of the smallest element in arr[] that is greater than
 or equal to x and print it. This element is called the ceil of x. If such an
 element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
*/
int arr[100], n = 0, x, i;
    int ans = -1;
    char ch;

    scanf(" arr = [");

    while(1)
    {
        scanf("%d", &arr[n]);
        n++;

        ch = getchar();

        if(ch == ']')
            break;
    }

    scanf(" , x = %d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}
