//question 2.
// Write a C program to determine if a given number is positive, negative, or zero.
 # include <stdio.h>
int main(){
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	
if (a>0){
	printf(" %d is positive number",a);
	}
	else if(a<0){
	printf("%d is negative number",a);
	}
	else{ 
	printf("%d is equal to zero",a);
	}
return 0;
}
