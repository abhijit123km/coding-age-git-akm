#include <stdio.h>

int main() {
    printf("Enter the number of rows and columns of the first matrix: ");
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++) {		
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The first matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    int o, p;
    scanf("%d %d", &o, &p);

    int ar[o][p];
    for (int i = 0; i < o; i++) {		
        for (int j = 0; j < p; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    printf("The second matrix is:\n");
    for (int i = 0; i < o; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    if (n != o || m != p) {
        printf("Error: the dimensions of the two matrices are not equal.\n");
        return 1;
    }

    int sum[n][m];
    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[i][j] = arr[i][j] + ar[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

