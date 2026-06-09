// Write a program to Find sum and average of array elements.

#include <stdio.h>

int main() {
    int arr[10], i, n;
    int sum = 0;
    float average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Input elements into the array and calculate the sum
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n; // Calculate the average of the array elements

    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}