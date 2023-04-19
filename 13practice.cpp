#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) 
        printf("(%d, %d) lies in the first quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("(%d, %d) lies in the second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("(%d, %d) lies in the third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("(%d, %d) lies in the fourth quadrant.\n", x, y);
    } else {
        printf("(%d, %d) lies on the axis or at the origin.\n", x, y);
    }

    return 0;
}

