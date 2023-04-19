//question :-28
//print pattern
/*
		1
	   121
	  12321
	 1234321
    123454321
*/#include <stdio.h>

#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

   
    for (int i = 1; i <= rows; i++) {
       
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
    
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
       
        for (int z = i - 1; z >= 1; z--) {
            printf("%d", z);
        }
        printf("\n");
    }

    return 0;
}


