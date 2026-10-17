#include<stdio.h>
int main()
{
//Q96: Reverse each word in a sentence without changing the word order.
char str[100];
    int i, j, start;

    fgets(str, sizeof(str), stdin);

    start = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' || str[i] == '\n')
        {
            for(j = i - 1; j >= start; j--)
            {
                printf("%c", str[j]);
            }

            if(str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}
