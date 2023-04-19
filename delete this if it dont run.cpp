/*#include <stdio.h>
int main(){
	int a,b;
		char c;
	printf(" enter two numbers\n");
	scanf("%d\n %d",&a,&b );
	printf("enter the operator");

	scanf("%c",&c);
	if (c == '+'){
		printf("%d",a+b);
	}
	return 0;
	
}*/
#include <stdio.h>

int main(){
    float num1, num2, result;
    char   operaor ;

    // take user input for two numbers and operator
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operaor);

    // perform calculation based on operator
    if(operaor == '+') {
        result = num1 + num2;
    }
    else if(operaor == '-') {
        result = num1 - num2;
    }
    else if(operaor == '*') {
        result = num1 * num2;
    }
    else if(operaor == '/') {
        if(num2 != 0) {
            result = num1 / num2;
        }
    }
        else {
            printf("Error: division by zero\n");
       
    }

    // display result
    printf("%.2f %c %.2f = %.2f\n", num1, operaor, num2, result);

    return 0;
}
