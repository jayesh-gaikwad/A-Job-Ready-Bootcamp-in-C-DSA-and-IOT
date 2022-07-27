#include <stdio.h>

int main()
{
    int number, i = 1;
    printf("Enter number which you have to print odd natural no :");
    scanf("%d", &number);
    while (number >= i)
    {
        printf("%d ", 2 * i - 1);
        i++;
    }
    return 0;
}