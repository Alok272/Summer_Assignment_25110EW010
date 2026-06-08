//write a program to Write function for palindrome.

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) // Function to check if a string is a palindrome
{
    int len = strlen(str);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) // Compare characters from the start and end of the string
    {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from the user
    str[strcspn(str, "\n")] = 0; // Remove the newline character added by fgets

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}