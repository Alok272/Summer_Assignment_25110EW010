// Write a program to Binary search.

#include <stdio.h>
int main() {
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array (sorted in ascending order): "); 
    for (int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target element to search: "); // Taking input for the target element to search
    scanf("%d", &target);
    
    // Binary search algorithm to find the target element in the sorted array
    int left = 0, right = size - 1, found_index = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index
        
        if (arr[mid] == target) { // Check if the target is present at mid
            found_index = mid; // Target found at index mid
            break;
        } else if (arr[mid] < target) { // If target is greater, ignore the left half
            left = mid + 1;
        } else {
        // If target is smaller, ignore the right half
            right = mid - 1;
        }
    }
    
    if (found_index != -1) {
        printf("Element %d found at index %d.\n", target, found_index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}