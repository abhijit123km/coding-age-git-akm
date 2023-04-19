// question :-30
//Write a C program to find the largest and smallest element in a 2D array of size n*m
#include <stdio.h>
int main(){

    int n, m;
    printf("Enter the number of rows n: ");
    scanf("%d", &n);
    printf("Enter the number of columns m: ");
    scanf("%d", &m);

   
    int arr[n][m];

   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter row %d elements: ", i+1);
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
     int largest = arr[0][0];
    int smallest = arr[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
            if (arr[i][j] < smallest) {
                smallest = arr[i][j];
            }
        }
    }

   
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}

