// Write a program to Rotate array left. 

#include <stdio.h>
int main() {   
    int arr[10], i, n, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Rotate array left by one position
    temp = arr[0];
    for (i = 0; i < n - 1; i++) // Loop to shift elements of the array to the left
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    printf("Array after left rotation: ");
    for (i = 0; i < n; i++) // Loop to print the elements of the array after left rotation
    {
        printf("%d ", arr[i]);
    }

    return 0;
}