//Write a program to Find maximum frequency element in array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum frequency element
    int max_freq = 0;
    int max_element = arr[0];
    for (int i = 0; i < n; i++) // Loop through each element to count its frequency
    {
        int freq = 0; // Initialize frequency count for arr[i]
        for (int j = 0; j < n; j++) // Count the frequency of arr[i]
        {
            if (arr[i] == arr[j]) // If the elements are the same,increment the frequency count
            {
                freq++;
            }
        }
        if (freq > max_freq) {
            max_freq = freq;
            max_element = arr[i];
        }
    }

    printf("The maximum frequency element is: %d\n", max_element);
    printf("Its frequency is: %d\n", max_freq);

    return 0;
}