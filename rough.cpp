#include <stdio.h>

int main() {
    int max = -999, min = 999, n;
    printf("Enter the number of elements to store: ");
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
        if (input[i] != 0 && input[i] != 1) {
            printf("Invalid input\nEnter the value either 0 or 1\n");
            i--;
        }
        if (min >= input[i]) {
            min = input[i];
        }
        if (max <= input[i]) {
            max = input[i];
        }
    }
    printf("Min: %d, Max: %d\n", min, max);
    for (int j = 0; j < n; j++) {
        printf("Arrangement %d: %d\n", j + 1, input[j]);
    }
    return 0;
}

