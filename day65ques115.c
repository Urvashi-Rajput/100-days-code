#include<stdio.h>
int main()
{
/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase).
 The task is to determine if s and t are valid anagrams, meaning they contain the same characters
 with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/
char s[100], t[100];
    int a[26] = {0};
    int i, flag = 1;

    scanf(" s = \"%[^\"]\", t = \"%[^\"]\"", s, t);

    for(i = 0; s[i] != '\0'; i++)
        a[s[i] - 'a']++;

    for(i = 0; t[i] != '\0'; i++)
        a[t[i] - 'a']--;

    for(i = 0; i < 26; i++)
    {
        if(a[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
