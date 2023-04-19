// question :-27
/* 27. Write a C program to calculate the fare of a taxi ride based on the distance
travelled, where the fare increases by a fixed amount for every kilometer travelled.
The program should take the distance travelled as input from the user and calculate
the total fare using the following rules:
Initial fare (for the first kilometer) = $5
Fare for each subsequent kilometer = $2
*/
#include <stdio.h>

int main() {
    float distance, fare;
    int initialFare = 5;
    int farePerKm = 2;
    
   
    printf("Enter distance travelled (in kilometers): ");
    scanf("%f", &distance);
    
   
    if (distance <= 0) {
        printf("Distance should be greater than 0.\n");
    } else if (distance <= 1) {
        fare = initialFare;
    } else {
        fare = initialFare + (distance - 1) * farePerKm;
    }
    
    
    printf("Total fare: %.2f\n", fare);
    
    return 0;
}

