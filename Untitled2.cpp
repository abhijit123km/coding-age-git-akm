#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // take user input for two numbers and operator
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // perform calculation based on operator
    if(operator == '+') {
        result = num1 + num2;
    }
    else if(operator == '-') {
        result = num1 - num2;
    }
    else if(operator == '*') {
        result = num1 * num2;
    }
    else if(operator == '/') {
        if(num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("Error: division by zero\n");
            return 1;
        }
    }
    else {
        printf("Error: invalid operator\n");
        return 1;
    }

    // display result
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}

