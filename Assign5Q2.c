#include <stdio.h>

int main()
{
    int number;
    printf("Enter number upto which you have to print natural no:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("%d ", i);
    }
    return 0;
}