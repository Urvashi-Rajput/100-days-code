#include<stdio.h>
int main()
{
//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
char date[20];
    char month[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                         "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    int dd, mm, yyyy;

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if(mm >= 1 && mm <= 12)
    {
        printf("%02d-%s-%04d", dd, month[mm-1], yyyy);
    }

    return 0;
}
