#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number >= 0)
    {
        printf("%d is positive number", number);
    }
    else
    {
        printf("%d is negative number", number);
    }

    return 0;
}