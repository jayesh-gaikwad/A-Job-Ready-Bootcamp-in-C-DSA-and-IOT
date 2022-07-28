#include <stdio.h>

int main()
{
    int number, quo, rem;
    printf("Enter a three digit number:");
    scanf("%d", &number);
    quo = number / 10;
    rem = number % 10;
    number = rem * 100 + quo;
    printf("Required Number is: %d", number);
    return 0;
}