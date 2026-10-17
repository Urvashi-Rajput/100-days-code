#include<stdio.h>
int main()
{
/*Q111: Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the first negative integer in each subarray of size k moving
 from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/
int arr[100], n = 0, k, i, j, found;
    char ch;

    scanf(" arr[] = [");

    while(1)
    {
        scanf("%d", &arr[n]);
        n++;

        ch = getchar();

        if(ch == ']')
            break;
    }

    scanf(", k = %d", &k);

    if(k <= 0 || k > n)
    {
        printf("-1");
        return 0;
    }

    for(i = 0; i <= n - k; i++)
    {
        found = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
            printf("0");

        if(i < n - k)
            printf(" ");
    }

    return 0;
}
