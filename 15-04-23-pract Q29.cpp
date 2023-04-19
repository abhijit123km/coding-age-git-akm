// question 29
// Write a C program to find the sum of elements in each row of a 2D array of size n*m

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

    
    printf("Sum of elements in each row:\n");
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum =  sum+arr[i][j];
        }
        printf("row %d: %d\n", i, sum);
    }

    return 0;
}


