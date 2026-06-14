// Write a program to Bubble sort. 

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
    
    // Bubble sort algorithm to sort the array in ascending order
    for (int i = 0; i<size - 1; i++) {
        for (int j = 0; j<size-i-1; j++) {
            if (arr[j] > arr[j + 1]) { // Compare adjacent elements
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for (int i = 0; i<size; i++) {
        printf("%d ", arr[i]); // Print sorted elements
    }
    printf("\n");
    
    return 0;
}