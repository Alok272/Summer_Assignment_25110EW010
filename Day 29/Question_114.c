// Write a program to Create menu-driven array operations system.

#include <stdio.h>

int main() {
    int arr[100], n, i, choice;
    int sum = 0, largest, smallest;
    int key, found = 0, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n===== ARRAY OPERATIONS MENU =====\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Largest Element\n");
    printf("4. Find Smallest Element\n");
    printf("5. Search Element\n");
    printf("6. Sort Array (Ascending)\n");
    printf("7. Reverse Array\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
            {
            sum += arr[i];
            }
            printf("Sum = %d\n", sum);
            break;

        case 3:
            largest = arr[0];
            for(i = 1; i < n; i++) 
            {
            if(arr[i] > largest)
            largest = arr[i];
            }
            printf("Largest Element = %d\n", largest);
            break;

        case 4:
            smallest = arr[0];
            for(i = 1; i < n; i++) 
            {
            if(arr[i] < smallest)
            smallest = arr[i];
            }
            printf("Smallest Element = %d\n", smallest);
            break;

        case 5:
            printf("Enter element to search: ");
            scanf("%d", &key);

            for(i = 0; i < n; i++) 
            {
            if(arr[i] == key) 
            {
             found = 1;
             break;
            }
            }

            if(found)
            printf("Element Found at Position %d\n", i + 1);
            else
            printf("Element Not Found\n");
            break;

        case 6:
            for(i = 0; i < n - 1; i++) 
            {
                for(int j = i + 1; j < n; j++) 
                {
                    if(arr[i] > arr[j]) 
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            printf("Sorted Array: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 7:
            printf("Reversed Array: ");
            for(i = n - 1; i >= 0; i--)
                printf("%d ", arr[i]);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}