// question :-18
// Write a C program to calculate the sum of the digits of a given number using loops.
#include <stdio.h>

int main() {
    int number, sum = 0, digit;
    

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    
    while (number > 0) {
        
        digit = number % 10;
        
        
        sum += digit;
        
        
        number /= 10;
    }
    
    
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}

