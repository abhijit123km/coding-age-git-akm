//question :-25
//write a C program to calculate the sum of digits of a given number and check if it isa multiple of 3.

#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;
    
  
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    originalNum = num;
    
  
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += remainder;
        originalNum /= 10;
    }
    
   
    if (sum % 3 == 0) {
        printf("The sum of digits of %d is %d, which is a multiple of 3.\n", num, sum);
    } else {
        printf("The sum of digits of %d is %d, which is not a multiple of 3.\n", num, sum);
    }
    
    return 0;
}


