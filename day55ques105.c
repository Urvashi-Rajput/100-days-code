#include<stdio.h>
int main()
{
/*Q105: Write a program to take an integer array nums of size n, and print the majority element.
 The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
 Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
*/
int nums[100], n = 0, i, j, count;
    int ans = -1;
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
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
                count++;
        }

        if(count > n / 2)
        {
            ans = nums[i];
            break;
        }
    }

    printf("%d", ans);

    return 0;
}
