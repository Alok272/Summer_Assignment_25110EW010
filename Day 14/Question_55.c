// Write a program to Second largest element. 
#include <stdio.h>
int main() {
    int arr[10], i, n, largest, second_largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Loop to read elements into the array
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[0];

    for (i = 1; i < n; i++)  // Loop to find the largest and second largest elements in the array
    {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Second largest element in the array: %d\n", second_largest);

    return 0;
}