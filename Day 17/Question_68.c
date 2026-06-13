// Write a program to Find common elements. 

#include <stdio.h>
int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the size of the second array: "); 
    scanf("%d", &size2);

    int arr1[size1], arr2[size2]; // Declaring two arrays for the input arrays

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("Common elements: ");
    // Finding common elements in arr1 and arr2
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) { // Check if element is common in both arrays
                printf("%d ", arr1[i]); // Print common element
                break;
            }
        }
    }
    printf("\n");
    
    return 0;
}