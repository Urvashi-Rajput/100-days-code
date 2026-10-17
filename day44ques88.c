#include<stdio.h>
int main()
{
//Q88: Replace spaces with hyphens in a string.
 char str[100];
    int i = 0;

    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            str[i] = '-';

        i++;
    }

    printf("%s", str);

    return 0;
}
