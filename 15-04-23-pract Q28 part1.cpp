// question :-28
//print pattern
/*
1
23
456
78910
*/
#include <stdio.h>

int main()
{
    int n;
    int num = 1;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &n);

   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", num++);
        }
        printf("\n");
    }

    return 0;
}

