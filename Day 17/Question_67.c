// Write a program to Intersection of arrays.

#include <stdio.h>
int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], intersection[size1 < size2 ? size1 : size2]; // Declaring three arrays: arr1 and arr2 for the input arrays, and intersection for the intersection of the two arrays

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int k = 0; // Index for intersection
    // Finding common elements in arr1 and arr2
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) { // Check if element is common in both arrays
                intersection[k++] = arr1[i]; // Add to intersection array
                break;
            }
        }
    }
    
    // Printing the intersection array
    printf("Intersection of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
    
    return 0;
}