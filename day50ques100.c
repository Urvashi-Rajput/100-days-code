#include<stdio.h>
int main()
{
//Q100: Print all sub-strings of a string.
char str[100];
    int i, j, k;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i; str[j] != '\0'; j++)
        {
            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if(!(i == 0 && j == 0))
                ;
            if(i == 0 && j == 0)
                printf(",");
            else
                printf(",");
        }
    }

    return 0;
}
