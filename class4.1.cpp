#include<stdio.h>
int main(){
	int a;
	printf(" enter an interger\n");
	scanf("%d",&a );
	printf("you have choosen %d\n",a);
	if(a % 2==0){
		printf("this is even number\n");
		
	}else{
		printf("this is not an even number");
	}
	return 0;
}
