#include<stdio.h>
int main()
{
//Q93: Check if two strings are anagrams of each other.
char a[100], b[100];
    int i, j, count = 0;

    scanf("%s %s", a, b);

    for(i = 0; a[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; b[j] != '\0'; j++)
        {
            if(a[i] == b[j])
                count++;
        }

        if(count == 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    for(i = 0; b[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; a[j] != '\0'; j++)
        {
            if(b[i] == a[j])
                count++;
        }

        if(count == 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
