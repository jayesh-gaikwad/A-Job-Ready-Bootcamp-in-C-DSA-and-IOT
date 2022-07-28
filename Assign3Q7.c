#include <stdio.h>

int main()
{
    int desc, a, b, c;
    printf("Enter value of a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    desc = b * b - 4 * a * c;
    if (desc > 0)
        printf("Real and Distinct");
    else if (desc < 0)
        printf("Imaginary");
    else
        printf("Real and Equal");
    return 0;
}