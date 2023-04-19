//question :-14
//Write a C program to find the difference between the sum of even-indexed element and the sum of odd-indexed elements in an array of integers of size n.
#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int evensum = 0;
    int oddsum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evensum += arr[i];
        }
        else
        {
            oddsum += arr[i];
        }
    }

    int difference = evensum - oddsum;
    printf("The difference between the sum of even position elements and odd positiom elements are: %d\n", difference);

    return 0;
}

