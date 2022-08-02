// Prime Numbers Between 10 To 30

#include <stdio.h>

int main()
{
    int count;
    for (int number = 10; number <= 30; number++)
    {
        count = 0;
        for (int i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && number != 1)
        {
            printf("%d ", number);
        }
    }
    return 0;
}