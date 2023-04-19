#include<stdio.h>
int main(){
	int a;
	int b;
	printf(" enter your marks\n");
	printf("enter total marks is\n");
	scanf("%d",&a );
	scanf("%d",&b );
	printf("you number is %d\n",a);
	float c = (a*100)/b;
	printf("you percentage  is %f\n",c);
	if (c>90){
		printf("doing well\n");
		} else if(c>70 && c<80){
			printf("you need to work hard");
		}		else{
			printf("your performance is low and you need to work harder on yourself");
		}
	
	

	return 0;
}
