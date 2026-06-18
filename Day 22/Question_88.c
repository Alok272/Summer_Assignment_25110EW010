// Write a program to remove spaces from a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) { // Loop through each character in the string
        if (str[i] != ' ') { // If the character is not a space, copy it to the new position
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0'; // Null-terminate the modified string

    printf("String after removing spaces: %s", str);

    return 0;
}