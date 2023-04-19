#include <stdio.h>
int main(){
	int dayNum;
	int result;
   /* printf("Enter a number : ");
    
    scanf("%d", &dayNum);
    if (dayNum>7){
    	result=dayNum/7;
    	
	}
	return 0;*/
 printf("Enter a number: ");
    scanf("%d", &dayNum);

    while (dayNum > 7) {
       result = dayNum /= 7;
    }

    switch(result) {
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
