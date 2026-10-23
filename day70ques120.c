#include<stdio.h>
int main()
{
//Q120: Write a program to take a string input. Change it to sentence case.
 char str[500];
    int i;
    char ch;

    scanf(" str = ");
    
    fgets(str, sizeof(str), stdin);

    if(str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    for(i = 1; str[i] != '\0'; i++)
    {
        if(str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
            str[i] = '\0';
    }

    printf("%s", str);

    return 0;
}
