/*#include<stdio.h>
int main(){

	return 0;
}*/


#include<stdio.h>
int main(){
	int a = 1;
	int n = 0;
	int count1=0;
	int count0=0;
	int l;
		printf("enter the number of elements to store : ");
	scanf("%d",&l);
	int input[l];
		for (int i=0;i<l;i++){
		scanf("%d",&input[i]);
		if(input[i]!=0 && input[i]!=1){
			printf("invalid input \n  enter the value either 0 or 1\n");
			i--;
		}
}
for(int i=0;i<l;i++){
if (input[i]==0){
	count0++;
}if (input[i]==1){
	count1++;
}
}
printf("total number of 1's is : %d\n",count1);
printf("total number of 0's is : %d\n",count0);
for (int k=1;k<=count1;k++){
	printf("%d ",n);
}
for (int m = 1;m<=count0;m++){
	printf("%d ",a	);
}
return 0;
}
