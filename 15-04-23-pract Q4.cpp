// question 4:-
//Write a C program to find the roots of a quadratic equation using if-else statements
#include <stdio.h>
# include<math.h>


int main() {
    float a, b, c, discriminant, val1, val2;
    printf("enter coefficients (a, b, c) of the quadratic equation:\n ");
    printf("it is quardatic equation so only two roots are possible ")
    
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
    
        val1 = (-b + sqrtf(discriminant)) / (2 * a);
        val2 = (-b - sqrtf(discriminant)) / (2 * a);
        printf("roots are real and distinct:\n");
        printf("value 1 = %.5f\n", val1);
        printf("value 2 = %.5f\n", val2);
    } 
	
	else if (discriminant == 0) {    
        val1 = -b / (2 * a);
        printf("roots are real and equal:\n");
        printf("value 1 = value 2 = %.5f\n", val2);
    }
	
	 else {

        float real = -b / (2 * a);
        float imaginary = sqrtf(-discriminant) / (2 * a);
        printf("roots are complex:\n");
        printf("value 1 = %.5f + %.5f\n", real, imaginary);
        printf("value 2 = %.5f - %.5f\n", real, imaginary);
    }

    return 0;
}

