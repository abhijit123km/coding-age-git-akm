/*
question 1:-
print by user input
*
* *
* * * 
* * * *  



#include <stdio.h>
int main(){
	int a;
	printf("enter the number:  ");
	scanf("%d",&a);
	for(int i =1;i<=a;i++){
		for(int j = 1;j<=i;j++){
			printf(" * ");
		}printf("\n");
	}
	return 0;
}
*/

/*
question 2:-
print by user input
* * * * *
* * * *
* * * 
* * 
*


#include <stdio.h>
int main(){
	int a;
	printf("enter the number:  ");
	scanf("%d",&a);
	for (int i= a;i>=0;i--){
		for(int j = 1;j<=i;j++){
			printf(" * ");
			
		}
		printf("\n");
	}
	
	return 0;
}

*/

/*question 3:-
print pattern  #*#*#*#
by taking different user input for each integer*/

#include <stdio.h>
int main(){
	int a;
	printf("enter the number:  ");
	scanf("%d",&a);
		for(int i = 1;i<=a;i++){
		for(int j = 1;j<=a;j++){
			if (j%2==0){
				printf("*");
				
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
	return 0;
}
/*
//question 4
//print 
#include <stdio.h>
int main(){
	int a;
	printf("enter the number:  ");
	scanf("%d",&a);
		for(int i = 1;i<=a;i++){
		for(int j = 1;j<=a;j++){
			if (j%2==0){
				printf("E ");
				
			}
			else
			{
				printf("O ");
			}
		}
		printf("\n");
	}
	return 0;
}

question 5
print pattern E O E
			  O E O
			  
#include <stdio.h>

int main() {
    // take user input for the number of rows in the pattern
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // loop through the rows and print the pattern
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // odd row: E O E...
            for (int j = 1; j <= n; j++) {
                if (j % 2 == 1) {
                    printf("E ");
                } else {
                    printf("O ");
                }
            }
        } else {
            // even row: O E O...
            for (int j = 1; j <= n; j++) {
                if (j % 2 == 1) {
                    printf("O ");
                } else {
                    printf("E ");
                }
            }
        }
        printf("\n"); // move to next row
    }

    return 0;
}

			  */
			  





