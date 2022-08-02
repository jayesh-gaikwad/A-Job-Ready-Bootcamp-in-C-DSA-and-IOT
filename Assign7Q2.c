// Printing upto N Term
//  1 1 2 3 5 8 13 ...

#include <stdio.h>
int main()
{
    int num, next = 0, prev = 0, curr = 1;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("1 ");
    for (int i = 0; i < num - 1; i++)
    {
        next = prev + curr;
        printf("%d ", next);
        prev = curr;
        curr = next;
    }

    return 0;
}