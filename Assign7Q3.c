// Finding Nth Term
//  1 1 2 3 5 8 13 ...

#include <stdio.h>
int main()
{
    int num, next = 0, prev = 0, curr = 1;
    printf("Enter a number:");
    scanf("%d", &num);
    for (int i = 0; 1; i++)
    {
        next = prev + curr;
        prev = curr;
        curr = next;

        if (next == num)
        {
            printf("Number Found In Series");
            break;
        }
        if (next > num)
        {
            printf("Number Not Found In Series");
            break;
        }
    }

    return 0;
}