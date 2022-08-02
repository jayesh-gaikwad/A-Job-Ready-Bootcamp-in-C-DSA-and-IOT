#include <stdio.h>

int main()
{
    int count = 1, sum, num, rem;
    while (count <= 2000)
    {
        num = count;
        sum = 0;
        while (num)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if (count == sum)
        {
            printf("%d ", count);
        }

        count++;
    }

    return 0;
}