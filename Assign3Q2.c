#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number % 5 == 0)
    {
        printf("%d is divisible by 5", number);
    }
    else
    {
        printf("%d is Not divisible by 5", number);
    }
}