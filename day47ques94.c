#include<stdio.h>
int main()
{
//Q94: Find the longest word in a sentence.
 char str[200], word[100];
    int i = 0, j = 0, max = 0, len = 0, start = 0;

    scanf("%[^\n]", str);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;
                start = i - len;
            }

            len = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    for(i = start; i < start + max; i++)
        printf("%c", str[i]);

    return 0;
}
