#include <stdio.h>
int main(){
	int a,b;
char c;
printf(" enter two numbers\n");
printf(" enter first number : ");
scanf("%d",&a);
printf(" enter second number : ");
scanf("%d",&b);
printf(" enter the operator( +,-,*,/,%) :");
scanf(" %c ",&c);
printf("\n");
printf("you have chosen %c operator and operands are %d %d",c,a,b);
printf("now the equation will be %d %c %d ",a,c,b);

	return 0;
}
