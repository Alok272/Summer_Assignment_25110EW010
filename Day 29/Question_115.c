// Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Display Menu
    printf("\n===== STRING OPERATIONS MENU =====\n");
    printf("1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Compare Strings\n");
    printf("4. Concatenate Strings\n");
    printf("5. Convert to Uppercase\n");
    printf("6. Display String\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: // Find length of the string
            printf("Length = %lu\n", strlen(str) - 1);
            break;

        case 2: 
        { // Reverse the string
            int len = strlen(str) - 1;
            for(int i = len - 1; i >= 0; i--)
                printf("%c", str[i]);
            printf("\n");
            break;
        }

        case 3: // Compare two strings
            getchar();
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);

            if(strcmp(str, str2) == 0)
                printf("Strings are Equal\n");
            else
                printf("Strings are Not Equal\n");
            break;

        case 4: // Concatenate two strings
            getchar();
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);

            str[strcspn(str, "\n")] = '\0';
            str2[strcspn(str2, "\n")] = '\0';
            strcat(str, " ");
            strcat(str, str2);
            printf("Concatenated String: %s\n", str);
            break;

        case 5: // Convert string to uppercase
            for(int i = 0; str[i] != '\0'; i++) {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("Uppercase String: %s\n", str);
            break;

        case 6: // Display the string
            printf("String: %s\n", str);
            break;

        default: 
            printf("Invalid Choice!\n");
    }

    return 0;
}