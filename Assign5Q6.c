#include <stdio.h>

int main()
{
    int number, i = 1;
    printf("Enter number which you have to print Even natural no :");
    scanf("%d", &number);
    while (i <= number)
    {
        printf("%d ", 2 * i);
        i++;
    }

    return 0;
}