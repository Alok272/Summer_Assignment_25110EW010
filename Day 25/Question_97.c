// Write a program to Merge Two Sorted Arrays

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    // Input elements of first sorted array
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: \n");
    scanf("%d", &n2);

    int arr2[n2];

    // Input elements of second sorted array
    printf("Enter elements of second sorted array: \n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Array to store merged result
    int merged[n1 + n2];

    // i -> arr1 index
    // j -> arr2 index
    // k -> merged array index
    int i = 0, j = 0, k = 0;

    // Compare elements of both arrays and store smaller one
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    // Display merged array
    printf("Merged Array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}