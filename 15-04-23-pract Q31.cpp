// question :-31
// . Write a C program to find the sum of elements in the main diagonal of a square 2D
//array of size n*n

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix n: ");
    scanf("%d", &n);

   
    int arr[n][n];


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter row %d elements: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

   
    printf("Sum of elements in diagonal: %d\n", sum);

    return 0;
}

