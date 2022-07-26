#include <stdio.h>

int main()
{
    int num;
    printf("Enter a  number :");
    scanf("%d", &num);
    int rem = 0, sum = 0;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    printf("%d", sum);

    return 0;
}