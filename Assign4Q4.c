#include <stdio.h>

int main()
{
    int num;
    printf("Enter number upto which you have to print Odd Natural No.:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", 2 * i - 1);
    }
    return 0;
}