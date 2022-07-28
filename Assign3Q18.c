#include <stdio.h>

int main()
{
    int month;
    printf("Enter a month:");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("%dst/rd/th Month is of 31 Days", month);
    }
    else if (month == 4 || month == 6 || month == 9)
    {
        printf("%dth Month is of 30 Days", month);
    }
    else
    {
        printf("%dnd Month is of 28/29 Days", month);
    }

    return 0;
}