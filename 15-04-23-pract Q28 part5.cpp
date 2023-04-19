//question :-28
//print pattern
/*
1
01
202
0303
40404
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
        int num = i % 10;
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
                printf("%d", num);
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}

