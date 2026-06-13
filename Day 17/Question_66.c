// Write a program to Union of arrays. 

#include <stdio.h>
int main() {
    int size1, size2;
    printf("Enter the size of the first array: "); 
    scanf("%d", &size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], unionArr[size1 + size2]; // Declaring three arrays: arr1 and arr2 for the input arrays, and unionArr for the union of the two arrays

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int k = 0; // Index for unionArr
    // Adding elements of arr1 to unionArr
    for (int i = 0; i < size1; i++) {
        unionArr[k++] = arr1[i];
    }
    // Adding unique elements of arr2 to unionArr
    for (int i = 0; i < size2; i++) {
        int j;
        for (j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) { // Check if element is already in arr1
                break;
            }
        }
        if (j == size1) { // If element is not found in arr1, add it to unionArr
            unionArr[k++] = arr2[i];
        }
    }
    
    // Printing the union array
    printf("Union of arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}