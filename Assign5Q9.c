#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number for printing cubes:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("%d ", i * i * i);
    }

    return 0;
}