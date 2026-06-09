// Write a program to Find largest and smallest element in an array.

#include <stdio.h>
int main() {
    int arr[10], i, n;
    int largest, smallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Input elements into the array
    {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0]; // Initialize largest and smallest to the first element of the array

    for (i = 1; i < n; i++) // Iterate through the array to find the largest and smallest elements
    {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element in the array: %d\n", largest);
    printf("Smallest element in the array: %d\n", smallest);

    return 0;
}

