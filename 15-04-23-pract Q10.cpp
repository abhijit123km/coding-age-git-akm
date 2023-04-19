//question 10:-
//Write a C program to count the number of even and odd elements in an array of size n
#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n); 
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int ecount = 0;
    int ocount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            ecount++;
        else
            ocount++;
    }

    printf("number of even elements: %d\n", ecount);
    printf("number of odd elements: %d\n", ocount);

    return 0;
}

