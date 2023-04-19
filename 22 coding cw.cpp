//question 1
//take the marks of 3 students and if their number is even add+2 in them and if their number is odd add +1 in them
/*
#include<stdio.h>
int main(){
	int marks[3];
	for (int i=0;i<3;i++){
		scanf("%d",&marks[i]);
}
printf("output\n");
		for (int i=0;i<3;i++){
	if(marks[i]%2==0){
		printf("%d",marks[i]+2);
		
	}else{
			printf("%d",marks[i]+1);
	}
	printf("\n");
}
	
	return 0;
}*/
// question 2
// using array solve the average max and min  question that is on the file  file name:-21 st cw coding age
/*#include <stdio.h>
int main(){
	int marks[10];
	 int  avgmarks, maxmarks, minmarks;
    int sum = 0;
    maxmarks=-999999;
        minmarks=999999;
		for (int i=0;i<10;i++){
		scanf("%d",&marks[i]);
		
	sum =sum+marks[i];
	
	if(maxmarks<marks[i]){
		maxmarks=marks[i];
	}
	if(minmarks>marks[i]){
		minmarks=marks[i];
	}
}
avgmarks = sum / 10;
    
    printf("Average marks = %d\n", avgmarks);
    printf("Maximum marks = %d\n", maxmarks);
    printf("Minimum marks = %d\n", minmarks);
	
	
	return 0;
	
}
*/
// question 3
// print the total no of 1 and o out of 10 by taking user input  and if user give any other input take again input in that place until its either 1 or 0
/*

#include<stdio.h>
int main(){
	int count1=0;
	int count0=0;
	int input[10];
		for (int i=0;i<10;i++){
		scanf("%d",&input[i]);
		if(input[i]!=0 && input[i]!=1){
		//	printf("invalid input \n  enter the value either 0 or 1\n");
			i--;
		}
}
for(int i=0;i<10;i++){
if (input[i]==0){
	count0++;
}if (input[i]==1){
	count1++;
}
}
printf("total number of 1's is : %d\n",count1);
printf("total number of 0's is : %d\n",count0);
return 0;
}
*/

