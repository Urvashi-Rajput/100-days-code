#include<stdio.h>
int main()
{
/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated. You need to print the first and last occurrence
 of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/
 int nums[100], n = 0, target, i;
    int first = -1, last = -1;
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

    scanf(" , target = %d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
