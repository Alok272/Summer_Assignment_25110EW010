//Write a program to Print number pyramid. 
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) // Outer loop for each row
     {

        for(j = 1; j <= n - i; j++) // Inner loop for spaces
            printf(" ");

        for(j = 1; j <= i; j++) // Inner loop for ascending numbers
            printf("%d", j);
            
        for(j = i - 1; j >= 1; j--) // Inner loop for descending numbers
            printf("%d", j);
        printf("\n");
    }

    return 0;
}