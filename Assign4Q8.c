#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number upto which you want to Print Squres:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}