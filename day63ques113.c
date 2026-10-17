#include<stdio.h>
int main()
{
/*Q113: Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/
 int arr[100], n = 0, k, i, j, temp;
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

    if(k < 1 || k > n)
    {
        printf("-1");
        return 0;
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d", arr[k - 1]);

    return 0;
}
