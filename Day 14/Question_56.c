// Write a program to Find duplicates in array.

#include <stdio.h>
int main() {
    int arr[10], i, j, n;
    int found_duplicate = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Loop to read elements into the array
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array: ");
    // Loop to find and print duplicate elements in the array
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found_duplicate = 1;
                break; // Break to avoid printing the same duplicate multiple times
            }
        }
    }

    if (!found_duplicate) {
        printf("No duplicates found.");
    }

    return 0;
}