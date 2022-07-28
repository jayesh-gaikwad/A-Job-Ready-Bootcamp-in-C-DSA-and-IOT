#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("%d is positive number", number);
    }
    else if (number < 0)
    {
        printf("%d is negative number", number);
    }
    else
    {
        printf("It's %d", number);
    }
    return 0;
}