//Write a program to Sort array in descending order.

#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("Enter the elements of the array: "); 
    for (int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sorting the array in descending order using selection sort algorithm
    for (int i = 0; i<size - 1; i++) {
        int max_index = i; // Assume the maximum is the first element
        for (int j = i + 1; j<size; j++) {
            if (arr[j] > arr[max_index]) { // Find the maximum element in unsorted array
                max_index = j; // Update index of maximum element
            }
        }
        // Swap arr[i] and arr[max_index]
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
    
    printf("Sorted array in descending order: ");
    for (int i = 0; i<size; i++) {
        printf("%d ", arr[i]); // Print sorted elements
    }
    printf("\n");
    
    return 0;
}