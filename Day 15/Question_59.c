// Write a program to Rotate array right. 

#include <stdio.h>
int main() {
    int arr[10], i, n, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Loop to read elements into the array
    {
        scanf("%d", &arr[i]);
    }

    // Rotate array right by one position
    temp = arr[n - 1];
    for (i = n - 1; i > 0; i--) // Loop to shift elements of the array to the right
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    printf("Array after right rotation: ");
    for (i = 0; i < n; i++) // Loop to print the elements of the array after right rotation
    {
        printf("%d ", arr[i]);
    }

    return 0;
}