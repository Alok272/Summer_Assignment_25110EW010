// Write a program to Remove duplicates from array.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) // Loop to read the elements of the array
    {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates from the array
    int unique_arr[n]; // Array to store unique elements
    int unique_count = 0; // Counter for unique elements

    for (int i = 0; i < n; i++) {
        int is_duplicate = 0; // Flag to check if the current element is a duplicate
        for (int j = 0; j < unique_count; j++) {
            if (arr[i] == unique_arr[j]) { // If the element is found in unique_arr, it's a duplicate
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) { // If it's not a duplicate, add it to unique_arr
            unique_arr[unique_count] = arr[i];
            unique_count++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < unique_count; i++) { // Print the unique elements
        printf("%d ", unique_arr[i]);
    }
    printf("\n");

    return 0;
}