// Write a program to Sort words by length. 

#include <stdio.h>
#include <string.h>
#define MAX_WORDS 100
#define MAX_LENGTH 50
int main() {
    char words[MAX_WORDS][MAX_LENGTH];
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);

    // Input words
    printf("Enter words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sort words by length using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                char temp[MAX_LENGTH];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    // Print sorted words
    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}