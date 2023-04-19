// question 7:-
//Write a C program to find the sum of all elements in an integer array using a for loop.

#include <stdio.h>

int main() {
    int n;
	printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf(" %d element  is : ", i + 1);
        scanf("%d", &arr[i]);
    }
int sum =0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("Sum of all elements in the array  is %d\n", sum);

    return 0;
}

