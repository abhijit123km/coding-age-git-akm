#include <stdio.h>
int main (){
	int num;
	int fact = 1;
	printf("write a number:  ");
	scanf("%d",&num);
	for (int a= 1;a<=num;a++){
		fact = fact*a;
		 
	}
	printf("the factorial of the given number is %d" ,fact);
	return 0;
}
