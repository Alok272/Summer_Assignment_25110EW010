// Write a program to Convert lowercase to uppercase in a string.

#include <stdio.h>
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Uppercase string: ");
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') { // Check if the character is a lowercase letter
            ch = ch - ('a' - 'A'); // Convert to uppercase by adjusting ASCII value
        }
        printf("%c", ch); // Print the character (converted or unchanged)
    }
    printf("\n");

    return 0;
}