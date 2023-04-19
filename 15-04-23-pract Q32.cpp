// question :-32
//. Write a C program to merge two sorted arrays of integers into a single sorted array of size n.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    int ar1[n];

    int m;
    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    int ar2[m];

    printf("Enter the elements of the first sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ar1[i]);
    }

    printf("Enter the elements of the second sorted array in ascending order:\n");
    for (int i = 0; i < m; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ar2[i]);
    }

    int mergedArr[n + m]; 
    int i = 0, j = 0, k = 0;
   
    while (i < n && j < m) {
        if (ar1[i] < ar2[j]) {
            mergedArr[k++] = ar1[i++];
        } else {
            mergedArr[k++] = ar2[j++];
        }
    }

    
    while (i < n) {
        mergedArr[k++] = ar1[i++];
    }

   
    while (j < m) {
        mergedArr[k++] = ar2[j++];
    }

    printf("Merged Array: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}


