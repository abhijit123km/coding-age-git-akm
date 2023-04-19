// question 1:-
//Write a C program to find the largest among three numbers using if statements.
# include <stdio.h>
int main(){
	int a,b,c;
	printf("enter three numbers:- ");
	scanf("%d,%d,%d", &a,&b,&c);
	printf("The numbers are %d , %d ,%d",a,b,c);
	printf("\n");
	if(a>b&&a>c){
		printf("%d is the max number",a);
	}
	if(b>a&&b>c){
		printf("%d is the max number",b);
	}
		if(c>a&&c>b){
		printf("%d is the max number",c);
	}
	return 0;
}
