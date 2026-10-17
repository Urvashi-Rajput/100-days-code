#include<stdio.h>
int main()
{
//Q81: Count characters in a string without using built-in length functions.
char str[100];
    int i = 0;

    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }

    printf("%d", i);

    return 0;
}
