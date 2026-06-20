//Write a program to Find longest word.

// Write a program to Find Longest Word in a Sentence

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100] = "";

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Split sentence into words using space as delimiter
    char *word = strtok(str, " ");

    // Traverse all words
    while (word != NULL) {

        // Check if current word is longer than longest word
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }

        // Move to next word
        word = strtok(NULL, " ");
    }

    // Print the longest word
    printf("Longest word: %s\n", longest);

    return 0;
}