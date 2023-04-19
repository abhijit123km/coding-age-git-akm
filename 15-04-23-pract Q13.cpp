//question :-13
//Write a C program to find the second largest and second smallest elements in an array of size n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int firstLargest = arr[0];
    int secondLargest = arr[0];
    int firstSmallest = arr[0];
    int secondSmallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != firstLargest)
        {
            secondLargest = arr[i];
        }

        if (arr[i] < firstSmallest)
        {
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != firstSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", secondLargest);
    printf("The second smallest element in the array is: %d\n", secondSmallest);

    return 0;
}





