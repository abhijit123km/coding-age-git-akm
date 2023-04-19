#include <stdio.h>
int main(){
	//WAP to check whether an alphabet is vowel or consonant
	printf("write an alphabet\n");
	char alphabet;
	scanf("%c",&alphabet);  
/*	if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
		 {
        printf("%c is a vowel.", alphabet);
    } else {
        printf("%c is a consonant.", alphabet);*/
        
        
        
    /*     switch(alphabet) {
        case 'a':
        	 printf("%c is a vowel.", alphabet);
            break;
        case 'e':
		 printf("%c is a vowel.", alphabet);
            break;
        case 'i':
        	 printf("%c is a vowel.", alphabet);
            break;
        case 'o':
        	 printf("%c is a vowel.", alphabet);
            break;
        case 'u':
        	 printf("%c is a vowel.", alphabet);
            break;
        case 'A':
        	 printf("%c is a vowel.", alphabet);
            break;
        case 'E':
        	 printf("%c is a vowel.", alphabet);
            break;
        case 'I':
        	 printf("%c is a vowel.", alphabet);
            break;
        case 'O':
        	 printf("%c is a vowel.", alphabet);
            break;
        case 'U':
            printf("%c is a vowel.", alphabet);
            break;
        default:
            printf("%c is a consonant.", alphabet);
            break;
    }*/
    
	// WAP to print day name using swwitch case
	int dayNum;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &dayNum);

    switch(dayNum) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }
	
	return 0;
}
