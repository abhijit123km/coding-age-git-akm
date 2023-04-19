#include <stdio.h>
int main(){

		char color;
		printf("Traffic signal\n");
    printf("--------------\n");
    printf("Enter the color of the traffic signal (r/y/g): ");
    scanf("%c ",&color);
    switch( color){
    	case 'r':
    		printf("signal is red --- stop");
    	 break;
    	case 'y':
		printf(" signal is yellow --- be ready");
		 break;
		case 'g':
			printf("signal is green --- go");
			break;
			default:
				printf("invalid input");
	}
		
	
	return 0;
	
}
