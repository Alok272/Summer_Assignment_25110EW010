// Write a program to Compress a string.

#include <stdio.h>
void compressString(char str[]) {
    int count = 1;
    char compressed[200]; // Assuming max length of str is 100
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) { // Loop through the string
        if (str[i] == str[i + 1]) { // Check for consecutive characters
            count++;
        } else {
            compressed[j++] = str[i];
            if (count > 1) { // Append count if greater than 1
                j += sprintf(&compressed[j], "%d", count);
            }
            count = 1;
        }
    }
    compressed[j] = '\0';

    // Check if compressed string is shorter than original
    if (strlen(compressed) < strlen(str)) {
        printf("Compressed string: %s\n", compressed);
    } else {
        printf("Compressed string is not shorter than original.\n");
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    compressString(str);

    return 0;
}