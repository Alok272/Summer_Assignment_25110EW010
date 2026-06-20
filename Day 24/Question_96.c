// Write a program to Remove duplicate characters from a string.

#include <stdio.h>
#include <string.h>
void removeDuplicates(char str[]) {
    int index = 0;
    int hash[256] = {0}; // Assuming ASCII character set

    for (int i = 0; str[i] != '\0'; i++) {
        if (hash[(unsigned char)str[i]] == 0) { // If character not seen before
            hash[(unsigned char)str[i]] = 1; // Mark character as seen
            str[index++] = str[i]; // Add character to result
        }
    }
    str[index] = '\0'; // Null-terminate the result string
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);

    return 0;
}