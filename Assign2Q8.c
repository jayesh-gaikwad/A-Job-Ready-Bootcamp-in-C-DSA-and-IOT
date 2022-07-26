#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    number = number % 2 == 0 ? printf("%d is Even no", number) : printf("%d is Odd no", number);
    return 0;
}