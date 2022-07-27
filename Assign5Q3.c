#include <stdio.h>

int main()
{
    int number;
    printf("Enter number from which you have to print natural no in rev order:");
    scanf("%d", &number);
    for (; number >= 1; number--)
    {
        printf("%d ", number);
    }
    return 0;
}