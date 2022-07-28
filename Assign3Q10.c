#include <stdio.h>

int main()
{
    int CP, SP;
    printf("Enter a Cost Price & Selling Price:");
    scanf("%d %d", &CP, &SP);
    if (CP > SP)
    {
        float loss = CP - SP;
        loss = (loss / CP) * 100;
        printf("Loss is %.2f Percentage", loss);
    }
    else if (SP > CP)
    {
        float profit = SP - CP;
        profit = (profit / SP) * 100;
        printf("Profit is %.2f Percentage", profit);
    }
    else
    {
        printf("NIETHER PROFIT NOR LOSS");
    }
    return 0;
}