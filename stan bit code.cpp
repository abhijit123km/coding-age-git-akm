//1
/* 
1
2 3
4 5 6
7 8 9 10
*/
/*abhijit mehta
tijihba athem
1*/
# include <stdio.h>
int main (){
	printf("enter the number of rows");
	int a;
	int b=1;
	scanf("%d",&a);
	
	for(int i; i<=a;i++){
		for( int j; j<=i;j++){
			printf("%d",b++);
		
		}
		printf("\n");
	
	}
	return 0;
}
