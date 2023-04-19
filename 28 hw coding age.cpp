#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, i, j, temp, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // finding the maximum and minimum numbers in the array
    max = arr[0];
    min = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    // arranging the array using maximum and minimum
    j = n - 1;
    i = 0;

    while(i < j)
    {
        if(arr[i] == min)
        {
            // swap min with the first element of the array
            temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
            i++;
        }
        else if(arr[j] == max)
        {
            // swap max with the last element of the array
            temp = arr[j];
            arr[j] = arr[n-1];
            arr[n-1] = temp;
            j--;
        }
        else
        {
            // move to the next element
            i++;
            j--;
        }
    }

    // printing the arranged array
    printf("The arranged array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

