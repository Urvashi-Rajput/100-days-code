#include<stdio.h>
int main()
{
//Q87: Count spaces, digits, and special characters in a string.
char str[100];
    int i = 0, s = 0, d = 0, sp = 0;

    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            s++;
        else if(str[i] >= '0' && str[i] <= '9')
            d++;
        else if((str[i] < 'A' || str[i] > 'Z') &&
                (str[i] < 'a' || str[i] > 'z'))
            sp++;

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", s, d, sp);

    return 0;
}
