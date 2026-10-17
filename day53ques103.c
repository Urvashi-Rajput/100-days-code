#include<stdio.h>
int main()
{
/*Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array.
 The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal
 to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array,
 then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
 Print the leftmost pivot index. If no such index exists, print -1.
*/
 int nums[100], n = 0, i, j;
    int left, right, ans = -1;
    char ch;

    scanf(" nums = [");

    while(1)
    {
        scanf("%d", &nums[n]);
        n++;

        ch = getchar();

        if(ch == ']')
            break;
    }

    for(i = 0; i < n; i++)
    {
        left = 0;
        right = 0;

        for(j = 0; j < i; j++)
            left += nums[j];

        for(j = i + 1; j < n; j++)
            right += nums[j];

        if(left == right)
        {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}
