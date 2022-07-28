#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter a sides  of traingle:");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
    {
        printf("Given Traingle Is Not Valid Triangle");
    }
    else
    {
        printf("Given Traingle Is  Valid Triangle");
    }
    return 0;
}