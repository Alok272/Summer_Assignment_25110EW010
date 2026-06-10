// Write a program to Linear search. 

#include <stdio.h>
int main() {
    int arr[10], i, n, key;
    int found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) // Input elements into the array
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) // Search for the element in the array
    {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) 
    {
        printf("Element %d found at index %d.\n", key, i);
    } 
    else 
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}