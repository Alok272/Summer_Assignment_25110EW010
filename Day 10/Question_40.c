//Write a program to Print character pyramid. 
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) // Outer loop for each row
    {

        for(j = 1; j <= n - i; j++) // Inner loop for spaces
            printf(" ");

        for(j = 0; j < i; j++) // Inner loop for ascending characters
            printf("%c", 'A' + j);

        for(j = i - 2; j >= 0; j--)  // Inner loop for descending characters
            printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}