// Write a program to Check string rotation. 

#include <stdio.h>
#include <string.h>
int isRotation(char str1[], char str2[]) {
    // Check if lengths of the strings are equal
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not a rotation
    }

    // Concatenate str1 with itself
    char temp[200]; // Assuming max length of str1 is 100
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    if (isRotation(str1, str2)) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}