#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; // not prime
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // not prime
        }
    }
    return 1; // prime
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}

