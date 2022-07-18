#include <stdio.h>

int main()
{
    int x = printf("ineuron");
    printf("%d", x);
    return 0;
}

// PS C:\Users\gaikw\OneDrive\Desktop\Assignments\Assignment1> cd "c:\Users\gaikw\OneDrive\Desktop\Assignments\Assignment1\" ; if ($?) { gcc QuestionTwelth.c -o QuestionTwelth } ; if ($?) { .\QuestionTwelth }
// ineuron7

// Output -> ineuron7

// Reason -> First We have "ineuron" as string after that with the
// help of variable 'x' we will store length of 'ineuron' which is 7
// so that answer is ineuron7