// question 9:-
//Write a C program to check if a given string is a palindrome or not using loops
/*

#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, isPalindrome;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    
    len = strlen(str);
    isPalindrome = 1;
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
    }

    
    if (isPalindrome)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}

