#include <stdio.h>
int main()
{
    int number;
    printf("Enter number which you have to print Even natural no in rev order:");
    scanf("%d", &number);
    while (1 <= number)
    {
        printf("%d ", 2 * number);
        number--;
    }
    return 0;
}