// question :-11
//  Write a C program to find the maximum element in an integer array using loops.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n); 

    int arr[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]); 
		    }

    int max = -999;
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];         }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

