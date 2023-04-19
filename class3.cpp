#include <stdio.h>
int main(){
	int  a,b;
	float c,d;
	long e,f;
	printf("enter two integers\n");
	scanf("%d %d",&a,&b);
	printf("enter two decimal numbers\n");
	scanf("%f %f",&c,&d);
	printf("enter numbers that represent long numbers\n");
	scanf("%ld  %ld",&e,&f);
	int sumofint =a+b;
	 float sumoffloat = c+d;
	long sumoflong = e+f;
	
	printf("the sum of two integers are %d\n",sumofint);
	printf("the sum of two floats are %f\n",sumoffloat);
	printf("the sum of two longs are %ld\n",sumoflong);
	
		int subofint =a-b;
	 float suboffloat = c-d;
	long suboflong = e-f;
	
	
	printf("the sub of two integers are %d\n",subofint);
	printf("the sub of two floats are %f\n",suboffloat);
	printf("the sub of two longs are %ld\n",suboflong);
	
	int mulofint =a*b;
	 float muloffloat = c*d;
	long muloflong = e*f;
	
	printf("the mul* of two integers are %d\n",mulofint);
	printf("the mul* of two floats are %f\n",muloffloat);
	printf("the mul* of two longs are %ld\n",muloflong);
	
	int divofint =a/b;
	 float divoffloat = c/d;
	long divoflong = e/f;
	
	printf("the div* of two integers are %d\n",divofint);
	printf("the div* of two floats are %f\n",divoffloat);
	printf("the div* of two longs are %ld\n",divoflong);
	
	
	
	return 0;
}
