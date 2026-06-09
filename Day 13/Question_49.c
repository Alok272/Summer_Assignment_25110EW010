// Write a program to Input and display array.

#include <stdio.h>

int main() {
    int arr[10], i, n;
    
    printf("Enter the number of elements in the array: "); // Input the number of elements in the array
    scanf("%d", &n); // Read the number of elements from the user
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Input elements into the array
    {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) // Display the elements of the array
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}