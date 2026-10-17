#include<stdio.h>
int main()
{
//Q98: Print initials of a name with the surname displayed in full.
 char str[100];
    int i;

    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i == 0)
            printf("%c.", str[i]);

        if(str[i] == ' ' && str[i+1] != '\0' && str[i+1] != '\n')
        {
            if(str[i+1] != ' ')
            {
                int j = i + 1;
                while(str[j] != ' ' && str[j] != '\0' && str[j] != '\n')
                    j++;

                if(str[j] == '\0' || str[j] == '\n')
                    printf(" %s", str + i + 1);
                else
                    printf("%c.", str[i+1]);
            }
        }
    }

    return 0;
}
