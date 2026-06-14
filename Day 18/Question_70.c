// Write a program to Selection sort. 

#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: "); 
    scanf("%d", &size);

    int arr[size]; // Declaring an array for the input elements

    printf("Enter the elements of the array: ");
    for (int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Selection sort algorithm to sort the array in ascending order
    for (int i = 0; i<size - 1; i++) {
        int min_index = i; // Assume the minimum is the first element
        for (int j = i + 1; j<size; j++) {
            if (arr[j] < arr[min_index]) { // Find the minimum element in unsorted array
                min_index = j; // Update index of minimum element
            }
        }
        // Swap arr[i] and arr[min_index]
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    
    printf("Sorted array: ");
    for (int i = 0; i<size; i++) {
        printf("%d ", arr[i]); // Print sorted elements
    }
    printf("\n");
    
    return 0;
}