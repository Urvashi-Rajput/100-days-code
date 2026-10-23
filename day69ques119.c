#include<stdio.h>
int main()
{
/*Q119: Write a program to take an integer array as input. Only one element will be repeated.
 Print the repeated element. Try to find the result in one single iteration.
*/
 int nums[100], seen[101] = {0};
    int n = 0, i, repeated = -1;
    char ch;

    scanf(" nums1 = %c", &ch);

    while(1)
    {
        scanf("%d", &nums[n]);
        n++;

        scanf("%c", &ch);

        if(ch == ']')
            break;
    }

    for(i = 0; i < n; i++)
    {
        if(seen[nums[i]] == 1)
        {
            repeated = nums[i];
            break;
        }

        seen[nums[i]] = 1;
    }

    printf("%d", repeated);

    return 0;
}
