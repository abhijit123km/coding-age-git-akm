#include <stdio.h>

int main() {
    int coffeechoice;
    int teachoice;
    float quantity;
    float cost = 0;
    char c;
    char t;
  
    printf("Welcome to the coffee shop!\n");
    printf("press c for coffee and t for tea\n");
    printf("1. Espresso\t\t\t rs 3.50\n");
    printf("2. Cappuccino\t\t\t rs 4.50\n");
    printf("3. Latte\t\t\t rs 5.00\n");
    printf("4. Mocha\t\t\t rs 5.50\n");
    printf("5. Ginger tea\t\t\t rs 3.50\n");
    printf("6. Lemon tea\t\t\t rs 4.50\n");
   
    printf("Enter your choice: t for tea and c for coffee ");
    scanf(" %c", &c);
  
    if (c == 'c') {
	    printf("Enter your coffee choice: ");
	    scanf("%d", &coffeechoice);

	    switch(coffeechoice) {
	        case 1:
	            cost = 3.50;
	            break;
	        case 2:
	            cost = 4.50;
	            break;
	        case 3:
	            cost = 5.00;
	            break;
	        case 4:
	            cost = 5.50;
	            break;
	        default:
	            printf("Invalid choice\n");
	            return 0;
	    }
    } else if (c == 't') {
	    printf("Enter your tea choice: ");
	    scanf("%d", &teachoice);

	    switch(teachoice) {
		    case 5:
	            cost = 3.50;
	            break;
	        case 6:
	            cost = 4.50;
	            break;
	        default:
	            printf("Invalid choice\n");
	            return 0;
	    }
    }
  
    printf("Enter the quantity: ");
    scanf("%f", &quantity);
    float totalcost = quantity*cost;
  
    printf("Your total cost is %f\n" ,totalcost);
    printf("Thank you for visiting the coffee shop!\n");
  
    return 0;
}


