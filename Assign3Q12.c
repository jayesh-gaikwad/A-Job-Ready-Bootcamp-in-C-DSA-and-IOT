#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is Upper Case Alphabet", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is Lower Case Alphabet", ch);
    }
    else
    {
        printf("%c is Not A Alphabet", ch);
    }
    return 0;
}