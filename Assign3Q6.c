#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter numbers for check:");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is Greater than %d", num1, num2);
    }
    else if (num1 >= num2)
    {
        printf("%d is Greater number", num1);
    }
    else
    {
        printf("%d is Greater than %d", num2, num1);
    }
}