// question :-12
//  Write a C program to find the minimum element in a floating-point array using loops.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n); 

    float arr[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("element %d: ", i + 1);
        scanf("%f", &arr[i]); 
		    }

    float min = +999;
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];         }
    }

    printf("The minimum element in the array is: %f\n", min);

    return 0;
}

