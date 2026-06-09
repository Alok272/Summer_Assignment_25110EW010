// Write a program to Count even and odd elements in an array.

#include <stdio.h>
int main() {
    int arr[10], i, n;
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Input elements into the array and count even and odd elements
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) // Check if the element is even
        {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Number of even elements in the array: %d\n", evenCount);
    printf("Number of odd elements in the array: %d\n", oddCount);

    return 0;
}