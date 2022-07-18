#include <stdio.h>

int main()
{
    int hour, minute;
    printf("Enter hour:minute ");
    scanf("%d:%d", &hour, &minute);
    printf("%d Hour and %d Minute", hour, minute);
    return 0;
}