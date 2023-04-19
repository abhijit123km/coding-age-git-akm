// question :-28
//print pattern
/*
1
10
101
1010
10101

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &n);

    // Loop to print the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}

