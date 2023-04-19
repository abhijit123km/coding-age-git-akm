
#include <stdio.h>
int main()
{
    printf(" #Q.no 1\n\n");
    int a, b;
    printf("enter first number\n");
    scanf("%d", &a);
    printf("enter second number\n");
    scanf("%d", &b);
    printf("addition of %d+%d is:    %d\n", a, b, a + b);
    printf("subtraction of %d-%d is: %d\n", a, b, a - b);
    printf("multiply of %d*%d is:    %d\n", a, b, a * b);
    printf("div  of %d/%d is:        %d\n", a, b, a / b);
    printf("remainder of %d%%%d is:   %d\n", a, b, a % b);

    printf(" #Q.no 2\n\n");

    char c, d;
    int cmarks, dmarks;
    printf("enter initial name of student\n");
    scanf(" %c", &c);
    printf("enter  marks\n");
    scanf("%d", &cmarks);
    printf("enter initial name of student\n");
    scanf(" %c", &d);
    printf("enter  marks\n");
    scanf("%d", &dmarks);

    if (cmarks < dmarks)
    {
        printf(" %c-%d\n", c, cmarks);
        printf(" %c-%d\n", d, dmarks);
    }
    else
    {
        printf(" %c-%d\n", d, dmarks);
        printf(" %c-%d\n", c, cmarks);
    }

    return 0;
}