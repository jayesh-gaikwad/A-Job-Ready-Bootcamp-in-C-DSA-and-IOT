#include <stdio.h>

int main()
{
    int number;
    printf("Enter number which you have to print odd natural no in rev order:");
    scanf("%d", &number);
    while (1 <= number)
    {
        printf("%d ", 2 * number - 1);
        number--;
    }
    return 0;
}