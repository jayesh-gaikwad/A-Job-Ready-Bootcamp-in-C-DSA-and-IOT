#include <stdio.h>

int main()
{
    int number, sum = 0;
    printf("Enter a number:");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        sum = sum + i * i * i;
    }
    printf("Sum is %d", sum);

    return 0;
}