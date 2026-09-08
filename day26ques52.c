#include<stdio.h>
int main()
{
//Q52: Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
int i;

    // 1 star
    printf("*\n");

    printf("\n");

    // 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }

    printf("\n");

    // 5 stars
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }

    printf("\n");

    // 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }

    printf("\n");

    // 1 star
    printf("*\n");

    return 0;
}
