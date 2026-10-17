#include <stdio.h>

int main()
{
//Q64: Find the digit that occurs the most times in an integer number.

 int n, temp, d, i, c, max = 0, ans = 0;

    scanf("%d", &n);

    for(i = 0; i <= 9; i++)
    {
        temp = n;
        c = 0;

        while(temp > 0)
        {
            d = temp % 10;

            if(d == i)
                c++;

            temp = temp / 10;
        }

        if(c > max)
        {
            max = c;
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}
