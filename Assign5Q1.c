#include <stdio.h>

int main()
{
    int number;
    printf("Enter no how much times you have to print MySirG:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("MySirG\n");
    }
    return 0;
}