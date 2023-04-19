//question 1;
/* WAP print first 10 even numbers
#include <stdio.h>
int main (){
	int i= 0;
	
	while(i<10){
		printf("%d\n",2*i);
		i++ ;	}
			
	return 0;
}*/

/*question 2;
// WAP print first 10 odd numbers part 1
#include <stdio.h>
int main (){
	int i= 0;
	
	while(i<=10){
		printf("%d\n",(2*i)+1);
		i++ ;	}
	
	return 0;
}
/*question 2;*/
// WAP to find the sum of first 10 odd numbers part 2
/*#include <stdio.h>
int main (){
	int i= 0;
	int sum =0;
	int num = 1;
	while (i<10){
		if (num %2!=0){
			sum+= num;
			i++ ;				
			}
		num++ ;
	}
		printf("the sum of first 10 odd numbers is %d\n",sum);
	
	return 0;
	}*/

/* question 3 */
//WAP to take a user input n and print odd or even  from 1 to n
/*#include <stdio.h>
int main(){
	int n;
	printf(" enter a number \n");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		if  (i%2==0){
			printf("%d is even number\n",i);
			
		}else if (i%2!= 0){
			printf("%d is odd number\n",i);
		}
	
	i++ ;
	}
	
	return 0;
}*/

/*question 4*/
// WAP to reverse a given number
/*#include <stdio.h>
int main(){
	int s;
	int r;
	int remainder;
	printf("enter the number:  ");
	scanf("%d",&s);
	while(s!=0){
		remainder = s%10;
		r= r*10+remainder;
		s/= 10;
	}
	printf("the reverse of this number is %d\n",r);
	return 0;
}*/

