#include<stdio.h>
int main()
{
/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer
 x such that the sum of all elements between 1 and x inclusively equals the sum of all
 elements between x and n inclusively. Print the pivot integer x. If no such integer exists,
 print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/
int n, x, i;
    int left, right, ans = -1;

    scanf(" n = %d", &n);

    for(x = 1; x <= n; x++)
    {
        left = 0;
        right = 0;

        for(i = 1; i <= x; i++)
            left += i;

        for(i = x; i <= n; i++)
            right += i;

        if(left == right)
        {
            ans = x;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}
