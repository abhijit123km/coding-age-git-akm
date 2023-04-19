//question 5
//Write a C program to calculate the factorial of a number using a for loop.
#include<stdio.h>  
int main(){   
 
 int n;  
 int fact =1;  
 printf("Enter a number: ");    
  scanf("%d",&n);    
    for(int i=1;i<=n;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",n,fact);    
return 0;  
}   
