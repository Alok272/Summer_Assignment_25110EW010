// Write a program to Find pair with given sum.

#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) // Loop to read the elements of the array
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum to find pairs: "); // Prompt the user to enter the sum for which pairs need to be found
    scanf("%d", &sum);

    printf("Pairs with sum %d are:\n", sum);
    for (int i = 0; i < n; i++) // Loop through each element to find pairs
    {
        for (int j = i + 1; j < n; j++) // Loop to check for pairs with the current element
        {
            if (arr[i] + arr[j] == sum) // If the sum of the pair equals the given sum, print the pair
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}