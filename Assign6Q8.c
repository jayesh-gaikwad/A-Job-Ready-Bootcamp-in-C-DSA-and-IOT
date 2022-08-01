#include <stdio.h>

int main()
{
    int number, flag = 0;
    printf("Enter a number:");
    scanf("%d", &number);

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("Not Prime No");
    }
    else
    {
        printf("Prime No");
    }

    return 0;
}