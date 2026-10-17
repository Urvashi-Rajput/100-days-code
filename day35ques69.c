#include<stdio.h>
int main()
{
//Q69: Find the second largest element in an array.
 int n, a[100], i, j, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("%d", a[1]);

    return 0;
}
