#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    int ans = 0, count = 1;
    while (number != 0)
    {
        ans = number & 1;
        if (ans == 1)
        {
            printf("The Position of First 1 in LSB is: %d", count);
            break;
        }
        count++;
        number = number >> 1;
    }

    return 0;
}