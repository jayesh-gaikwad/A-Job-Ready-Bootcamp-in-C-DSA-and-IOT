#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if (number > 99 && number < 1000)
    {
        printf("%d is Three Digit Number", number);
    }
    else
    {
        printf("%d is Not Three Digit Number", number);
    }
}