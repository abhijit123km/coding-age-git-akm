/*#include<stdio.h>
int main(){
char fruit[50]="apple ";
char type[] = "very juicy;
strcat(fruit,type);
printf("%s", fruit);
	return 0;
}*/
#include <stdio.h>
 
int main() {
  char x[30] = "Hello ";
  char y[] = "World!";
 
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(x, y);
  
  // Print str1
  printf("%s", x);
 
  return 0;
}
