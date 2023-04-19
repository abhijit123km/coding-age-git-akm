#include <stdio.h>

// Function to return the maximum of two numbers
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to print the minimum of two numbers
void print_min(int a, int b) {
    if (a < b) {
        printf("Minimum value is %d\n", a);
    } else {
        printf("Minimum value is %d\n", b);
    }
}

// Main program to use the above functions
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max_num = max(num1, num2);
    printf("Maximum value is %d\n", max_num);

    print_min(num1, num2);

    return 0;
}

