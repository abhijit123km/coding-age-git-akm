#include<stdio.h>

int checkNumber( int a){	
		if (a==0){
			return 0;
			
		}
		else if(a>0){
		return 1;
}else if (a<0){
	return -1;
}
}

int main(){
	int c ;
	scanf("%d",&c);
	int d =checkNumber(c);
	printf("%d",d);
	return 0;
}
