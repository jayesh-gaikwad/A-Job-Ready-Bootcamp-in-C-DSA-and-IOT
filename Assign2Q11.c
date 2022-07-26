#include <stdio.h>
int main()
{
    int n, digit = 0;
    printf("Enter number:");
    scanf("%d", &n);
    printf("Enter a digit:");
    scanf("%d", &digit);

    int num = digit;
    while (digit != 0)
    {
        n *= 10;
        digit /= 10;
    }
    int ans = n + num;
    printf("%d", ans);
}
