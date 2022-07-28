#include <stdio.h>

int main()
{

    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number % 7 == 0 && number % 3 == 0)
    {
        printf("%d is divisible by 7 and 3", number);
    }
    else
    {
        printf("%d is not divisible by 7 and 3", number);
    }
}