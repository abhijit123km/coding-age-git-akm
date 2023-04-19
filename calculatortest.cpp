#include <stdio.h>
int main(){
	char c;
	int a,b;
	float result;
	
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b );
	printf(" enter operator\n");
	scanf("%c",&c);
	if (c=='+'){
		result =a+b;
	}else if(c=='-'){
		result =a-b;		
	}
	else if (c== '*'){
	
		result =a*b;
	}
	else if (c=='/'){
	
		result =a/b;
		}
		
		printf("%d %c %d equals to ", &a, &c, &b);
		printf("result %f",result);
	return 0;
}
