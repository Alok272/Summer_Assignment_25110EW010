// Write a program to Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str) - 1; // Subtract 1 to exclude the newline character

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) { // Loop from the end of the string to the beginning
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}