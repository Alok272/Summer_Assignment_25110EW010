//Write a program to Frequency of an element. 

#include <stdio.h>
int main() {
    int arr[10], i, n, key; 
    int frequency = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Loop to read elements into the array
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) // Loop to count the frequency of the key in the array
    {
        if (arr[i] == key) {
            frequency++;
        }
    }

    printf("Frequency of element %d in the array: %d\n", key, frequency);

    return 0;
}