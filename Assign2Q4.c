#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers to swap:");
    scanf("%d %d", &num1, &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping numbers are: %d %d", num1, num2);
    return 0;
}