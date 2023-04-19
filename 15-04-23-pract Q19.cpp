//question :-19
//Write a C program to find the GCD (Greatest Common Divisor) of two numbers using loops.
#include <stdio.h>

int main() {
    int num1, num2, remainder, gcd;
    
   
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    
    while (num2 != 0) {
        
        remainder = num1 % num2;
        
        
        num1 = num2;
        num2 = remainder;
    }
    
   
    gcd = num1;
    
   
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    
    return 0;
}

