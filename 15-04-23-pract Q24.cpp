// question :-24
// Write a C program to check if a given string is a valid palindrome or not.

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
        printf("%s is a valid palindrome.\n", str);
    else
        printf("%s is not a valid palindrome.\n", str);

    return 0;
}
