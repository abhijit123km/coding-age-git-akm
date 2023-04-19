//question :-28
//print pattern
/* 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
    */
#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows  ");
    scanf("%d", &rows);



    int i, j, k;   
    for (i = 1; i <= rows / 2 + 1; i++) {        
        for (j = 1; j <= rows / 2 + 1 - i; j++) {
		            printf(" ");
        }        
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }   
    for (i = rows / 2; i >= 1; i--) {        
        for (j = 1; j <= rows / 2 + 1 - i; j++) {
            printf(" ");
			        }        
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

