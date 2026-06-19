// Write a program to Find first repeating character in a given string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1; // Exclude newline character

    // Count frequency of each character
    for (i = 0; i < len; i++) {
        freq[str[i]]++;
    }

    // Find first repeating character
    for (i = 0; i < len; i++) {
        if (freq[str[i]] > 1) {
            printf("First repeating character is: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");
    return 0;
}