// question :-21
//Write a C program to find the largest among three numbers using ternary operator
#include <stdio.h>

int main() {
    int num1, num2, num3, largest;
    
   
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    
    
    printf("The largest number is: %d\n", largest);
    
    return 0;
}


