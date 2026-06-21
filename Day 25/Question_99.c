// Write a program to Sort names alphabetically.

#include <stdio.h>
#include <string.h>
#define MAX_NAMES 100
#define MAX_LENGTH 50
int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);

    // Input names
    printf("Enter names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Sort names alphabetically using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[MAX_LENGTH];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Print sorted names
    printf("Names sorted alphabetically:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
