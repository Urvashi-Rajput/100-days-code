#include<stdio.h>
#include<string.h>
int main()
{
//Q95: Check if one string is a rotation of another.
 char a[100], b[100], c[200];
    int i, j, len1 = 0, len2 = 0;

    scanf("%s %s", a, b);

    while(a[len1] != '\0')
        len1++;

    while(b[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    for(i = 0; i < len1; i++)
        c[i] = a[i];

    for(i = 0; i < len1; i++)
        c[len1 + i] = a[i];

    c[2 * len1] = '\0';

    if(strstr(c, b) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
