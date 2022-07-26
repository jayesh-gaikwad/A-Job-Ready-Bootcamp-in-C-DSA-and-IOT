#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter numbers to swap:");
    scanf("%d %d", &num1, &num2);
    int num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("After swapping numbers are: %d %d", num1, num2);
    return 0;
}