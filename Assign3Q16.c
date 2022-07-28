#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is Upper Case Letter", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is Lower Case Letter", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is Digit", ch);
    }
    else
    {
        printf("%c is Special Character", ch);
    }
    return 0;
}