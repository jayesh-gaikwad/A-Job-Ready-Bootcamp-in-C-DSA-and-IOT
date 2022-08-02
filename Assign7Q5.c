// Check CO-PRIME or NOT
#include <stdio.h>
int main()
{
    int num1, num2, hcf = 1;

    printf("Enter Two Numbers:");
    scanf("%d %d", &num1, &num2);

    int minVal = num1 < num2 ? num1 : num2;

    for (int i = 1; i <= minVal; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
            hcf = i;
    }
    printf("HCF is %d &", hcf);
    if (hcf == 1)
    {
        printf(" Given Numbers are Co-Prime Numbers");
    }
    else
    {
        printf(" Given Numbers are Not Co-Prime Numbers");
    }
    return 0;
}