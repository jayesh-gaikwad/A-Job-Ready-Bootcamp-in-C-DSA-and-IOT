#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter a marks of 5 Subjects out of 100:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
        printf("Candidate is Passed In Exam");
    else
        printf("Candidate is Failed In Exam");
    return 0;
}