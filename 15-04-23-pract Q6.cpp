//question 6:-
//write a C program to print the Fibonacci series up to a given limit using a for loop.
#include <stdio.h>

#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3;    
 printf("Enter the number of elements:");
 int n  ;  
 scanf("%d",&n);    
 printf("\n%d %d",n1,n2);    
 for(int i=2;i<n;i++){    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }  

