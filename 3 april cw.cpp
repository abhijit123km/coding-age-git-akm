/*#include <stdio.h>

int main() {
	
    int arr[10], n, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Duplicate elements in the array are: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
            
            }
        }
    }
    printf("\n");
    return 0;
}
*/

#include <stdio.h>
int main(){
printf("enter the number of rows and  columns: ");
		int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
		int arr[n][m];
	for (int i=0;i<n;i++){		
		for (int j=0;j<m;j++){
		scanf("%d",&arr[i][j]);
		}
	}
		 printf("The  1st matrix  is: \n ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    		int o,p;
    		printf("enter the number of rows and  columns: ");
	scanf("%d",&o);
	scanf("%d",&p);
		int ar[o][p];
	for (int i=0;i<o;i++){		
		for (int j=0;j<p;j++){
		scanf("%d",&arr[i][j]);
		}
	}
		 printf("The  2nd matrix  is: \n ");
    for (int i = 0; i < o; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
}
if (n!=o || m!=p){
	printf("error : rows and columns doesn't match'");
}

int sum[n][m];
 for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[i][j] = arr[i][j] + ar[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }


  return 0;
}
