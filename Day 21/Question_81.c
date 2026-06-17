// Write a program to Find string length without strlen() function.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') // Check for null terminator and newline character
    {
        i++;
    }

    printf("Length = %d", i);

    return 0;
}