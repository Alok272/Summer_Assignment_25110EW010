// Write a program to Count words in a sentence.

#include <stdio.h>
int main() {
    char str[100];
    int i, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Read a line of input

    for (i = 0; str[i] != '\0'; i++) { // Loop through each character in the string
        if (str[i] == ' ' || str[i] == '\n') { // Check for space or newline
            wordCount++; // Increment word count for each space or newline
        }
    }

    // If the last character is not a space or newline, we need to count the last word
    if (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n') {
        wordCount++;
    }

    printf("Number of words in the sentence: %d\n", wordCount);

    return 0;
}