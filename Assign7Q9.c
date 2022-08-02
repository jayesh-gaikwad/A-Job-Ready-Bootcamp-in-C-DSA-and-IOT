#include <stdio.h>

int main()
{
    int number, temp, sum = 0, rem;
    printf("Enter a number:");
    scanf("%d", &number);

    temp = number;
    while (number > 0)
    {
        rem = number % 10;
        sum = sum + rem * rem * rem;
        number = number / 10;
    }
    if (temp == sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}