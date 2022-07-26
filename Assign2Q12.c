#include <stdio.h>

int main()
{
    float INR;
    printf("Enter the Indian Rupees:");
    scanf("%f", &INR);

    float USD = INR / 76.23;
    printf("USD Price is: %f", USD);
    return 0;
}