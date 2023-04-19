/*
write a program  to take  n number  and return 0 if it is prime     return 1  if it is even    return 2 if it is odd

take 10 user input and usse above function and print the sum of outputs for all numbers
*/
// check the number is prime or not
#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n <= 1) {
        return 0; // not a prime number
    }
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0; // not a prime number
        }
    }
    return 1; // prime number
}

int main() {
    int n, result, sum;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        result = 1; // even number
    } else {
        result = 2; // odd number
    }

    if (isPrime(n)) {
        result = 0; // prime number
    }

    printf("%d\n", result);
    
    sum += result;

    printf("Sum of outputs: %d\n", sum);
    return 0;
}

