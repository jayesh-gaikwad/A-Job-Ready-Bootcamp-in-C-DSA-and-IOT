#include <stdio.h>

int main()
{
    char charVar;
    int intVar;
    float floatVar;
    double doubleVar;

    charVar = sizeof(charVar);
    printf("Size of char variable is: %d\n", charVar);

    intVar = sizeof(intVar);
    printf("Size of int variable is:%d\n", intVar);

    floatVar = sizeof(floatVar);
    printf("Size of float variable is:%.2f\n", floatVar);

    doubleVar = sizeof(doubleVar);
    printf("Size of double variable is:%.2lf\n", doubleVar);

    return 0;
}