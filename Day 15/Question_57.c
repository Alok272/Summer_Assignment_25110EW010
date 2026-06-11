// Write a program to Reverse array. 

#include <stdio.h>
int main() {
    int arr[10], i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)  // Loop to read elements into the array
    {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) // Loop to print the elements of the array in reverse order
    {
        printf("%d ", arr[i]);
    }

    return 0;
}