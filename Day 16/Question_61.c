// Write a program to Find missing number in array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n-1; i++) // The array should contain numbers from 1 to n with one missing number
    {
        scanf("%d", &arr[i]);
    }

    // Find the missing number
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n-1; i++) {
        actual_sum += arr[i];
    }

    int missing_number = expected_sum - actual_sum;
    printf("The missing number is: %d\n", missing_number);

    return 0;
}