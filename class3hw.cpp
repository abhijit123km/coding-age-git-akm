# include<stdio.h>
int main(){
	int a = 1;	
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;
	int g = 7;
	int h = 8;
	int qw=25;
	
	printf("increment in a %d\n", a++);
	printf("a %d\n",a);
	printf("a %d\n\n", --a);
	
	printf("changing value of b using assignment operator\n");
	b*= 3;
	printf("%d\n",b);
	
	b*=b;
	printf("%d\n",b);
	
	int z = h%h;
	printf("using modulus %d \n", z);
		int zx =qw%c;
	printf("using modulus %d \n", zx);
	
	printf("using comparison operator\n");
	int l = a>b;
	printf("it is 0 for false statement and 1 for true statement %d\n",l);
	int k=qw>a;
	printf("it is 0 for false statement and 1 for true statement %d\n",k);
		int m = a!=b;
	printf("it is 0 for false statement and 1 for true statement %d\n",m);
	int n= a==b;
	printf("it is 0 for false statement and 1 for true statement %d\n",n);
	
	printf("%d %d %d %d\n", a>b&&a<b);
	printf("%d %d %d %d\n", a>b||a<b);
	
	
	
	
	return 0;
}
