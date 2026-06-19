// Write a program to Find maximum occurring character in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
        if (freq[str[i]] > maxFreq) {
            maxFreq = freq[str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character is '%c' with frequency %d\n", maxChar, maxFreq);

    return 0;
}