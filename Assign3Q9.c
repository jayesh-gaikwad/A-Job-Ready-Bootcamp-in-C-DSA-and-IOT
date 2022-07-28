#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter Numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num3)
    {
        printf("%d is greatest among three", num1);
    }
    else if (num2 > num3)
    {
        printf("%d is greatest among three", num2);
    }
    else
    {
        printf("%d is greatest among three", num3);
    }
    return 0;
}