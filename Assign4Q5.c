#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number From Which You Have to Print Odd Natural No In Rev Order:");
    scanf("%d", &num);
    for (int i = 1; num >= i; num--)
    {
        printf("%d\n", 2 * num - 1);
    }
    return 0;
}