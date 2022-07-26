#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    number /= 10;
    number *= 10;
    printf("%d", number);
    return 0;
}