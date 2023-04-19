//question :-8 
//write a C program to find the product of all elements in a floating-point array using a for loop.
#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    float arr[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("element %d: ", i + 1);
        scanf("%f", &arr[i]); 
    }
    
    float multiply = 1; 

    for (int i = 0; i < n; i++) {
        multiply *= arr[i];
    }
    
    printf("multiplication of all elements  is: %f\n", multiply); 

    return 0;
}

