// question :-16
//Write a C program to calculate the average of an array of floating-point numbers using loops.

#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    float arr[n]; 
    printf("Enter %d floating-point numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    float sum = 0; 
    for (int i = 0; i < n; i++) {
        sum += arr[i];
		    }

    float average = sum / n; 

    printf("The average of the %d numbers is: %.2f\n", n, average); 

    return 0;
}

