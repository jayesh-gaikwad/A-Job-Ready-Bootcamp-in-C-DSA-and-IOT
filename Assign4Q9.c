#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number upto which you want to Print Cube:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i * i * i);
    }
    return 0;
}