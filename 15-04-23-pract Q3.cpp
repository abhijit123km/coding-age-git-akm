// question 3:-
//Write a C program to check if a given number is even or odd using if-else statements.
 # include <stdio.h>
int main(){
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	
if (a%2==0){
	printf(" %d is  an even  number",a);
	}
	else if(a%2!=0){
	printf("%d is a odd number",a);
	}
	return 0;
}
