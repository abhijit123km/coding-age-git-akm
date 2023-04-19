//question :-17
// Write a C program to check if a given number is a prime number using loops
#include <stdio.h>

int main() {
    int num; 
    int isPrime = 1; 

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num <= 1) {
        isPrime = 0;
    } else {
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

