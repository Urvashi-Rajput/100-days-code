#include<stdio.h>
int main()
{
/*Q117: Write a program to take two sorted arrays of size m and n as input.
 Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/
int a[100], b[100], c[200];
    int m = 0, n = 0, k = 0;
    int i, j;
    char ch;

    scanf(" nums1 = %c", &ch);

    while(1)
    {
        scanf("%d", &a[m]);
        m++;

        scanf("%c", &ch);

        if(ch == ']')
            break;
    }

    scanf(" nums2 = %c", &ch);

    while(1)
    {
        scanf("%d", &b[n]);
        n++;

        scanf("%c", &ch);

        if(ch == ']')
            break;
    }

    i = 0;
    j = 0;

    while(i < m && j < n)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < m)
        c[k++] = a[i++];

    while(j < n)
        c[k++] = b[j++];

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
