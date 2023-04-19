/*Write a program in C to read n number of values in an array and display them in reverse order.
Example:-
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2

#include <stdio.h>

int main() {
   int n, i;
   printf("Enter the number of elements to store in the array: ");
   scanf("%d", &n);

   int arr[n];

   printf("Enter %d elements in the array:\n", n);

   for (i = 0; i < n; i++) {
      printf("Element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   printf("\nThe values stored into the array are:\n");
   for (i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }

   printf("\nThe values stored into the array in reverse are:\n");
   for (i = n - 1; i >= 0; i--) {
      printf("%d ", arr[i]);
   }
   return 0;
}*/
/*
Write a program in C to count the total number of duplicate elements in an array
Example:-
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1*/

#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    // Counting the duplicate elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is: %d\n", count);
    return 0;
}


