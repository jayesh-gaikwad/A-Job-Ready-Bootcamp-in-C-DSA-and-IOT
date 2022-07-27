#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number for printing squares:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("%d ", i * i);
    }

    return 0;
}