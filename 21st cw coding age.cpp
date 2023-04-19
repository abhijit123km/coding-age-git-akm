#include <stdio.h>

int main() {
    // Initialize variables to store the marks
    int marks, avgmarks, maxmarks, minmarks;
    int sum = 0;
    maxmarks=-999999;
        minmarks=999999;

    
    //  input marks 10 students
    for (int i = 1; i <= 10; i++) {
        printf("Enter the mark for student %d: ", i);
        scanf("%d", &marks);
        
    
        sum += marks;
        
        
        
        
        if(maxmarks<marks){
        	maxmarks=marks;
		}
        if(minmarks>marks){
        	minmarks=marks;
		}
        
     
}

    avgmarks = sum / 10;
    
    printf("Average marks = %d\n", avgmarks);
    printf("Maximum marks = %d\n", maxmarks);
    printf("Minimum marks = %d\n", minmarks);

    return 0;
}

