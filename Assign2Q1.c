#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("%d", num % 10);

    //  num = num % 10;
    //  printf("Unit Digit Of Given Number is: %d", num);

    return 0;
}