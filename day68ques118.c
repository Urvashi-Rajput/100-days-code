#include<stdio.h>
int main()
{
/*Q118: Write a program to take an input array of size n.
 The array should contain all the integers between 0 to n except for one. Print that missing number
*/
 int nums[100], n = 0;
    int i, sum = 0, total = 0;
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
        sum = sum + nums[i];

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
