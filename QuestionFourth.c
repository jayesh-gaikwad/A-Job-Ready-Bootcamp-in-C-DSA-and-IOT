#include <stdio.h>

int main()
{
    int radius;
    printf("Enter the radius of Circle to Calculate the Area : ");
    scanf("%d", &radius);
    float area = 3.14 * radius * radius;                                 // Formula of Cicrle
    printf("Area of circle is %.2f having the Radius %d", area, radius); //.2f is for Two Places after Decimal

    return 0;
}