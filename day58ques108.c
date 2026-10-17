#include<stdio.h>
int main()
{
/*Q108: Write a Program to take an integer array nums.
 Print an array answer such that answer[i] is equal to the product
 of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
int nums[100], answer[100];
    int n, i, j, product;

    scanf("nums = [%d", &nums[0]);
    n = 1;

    while(scanf(",%d", &nums[n]) == 1)
        n++;

    scanf("], x = %d", &i);

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
                product = product * nums[j];
        }

        answer[i] = product;
    }

    printf("[");

    for(i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if(i < n - 1)
            printf(",");
    }

    printf("]");

    return 0;
}
