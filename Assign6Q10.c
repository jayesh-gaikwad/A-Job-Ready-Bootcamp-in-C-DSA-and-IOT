#include <stdio.h>

int main()
{
    int number, rem, rev = 0;
    printf("Enter a number:");
    scanf("%d", &number);

    while (number != 0)
    {
        rem = number % 10;
        number = number / 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse number is:%d", rev);
    return 0;
}
