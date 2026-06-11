// Write a program to Move zeroes to end.

#include <stdio.h>
int main() {
    int arr[10], i, n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    for (i = 0; i < n; i++) // Loop to move non-zero elements to the front of the array
     {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill remaining elements with zero
    while (count < n) {
        arr[count++] = 0;
    }

    printf("Array after moving zeroes to end: ");
    for (i = 0; i < n; i++) // Loop to print the elements of the array after moving zeroes to the end
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
