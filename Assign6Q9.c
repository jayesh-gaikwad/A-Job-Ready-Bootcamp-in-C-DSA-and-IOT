#include <stdio.h>

int main()
{
    int i, num1, num2;
    printf("Enter numbers:");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 * num2; i++)
    {
        if ((i % num1 == 0) && (i % num2 == 0))
        {
            break;
        }
    }

    printf("LCM is: %d", i);
    return 0;
}