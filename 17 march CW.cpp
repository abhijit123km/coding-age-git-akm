/*#include<stdio.h>
int main(){
	printf(" enter the number: ");
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){	
	printf("%d ",i);
	
	
	printf("\n");
	n++;
	for(int j= 1;j<=i;j++){
	}
	
/*	int k = n+1;
	
	for(int j = k;j<=n*2;j++){
		printf("%d",j);
	}
	return 0;
}*/
#include <stdio.h>

int main() {
    int n;
	int num = 1;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
   
    
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf(" %d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}

