//Write a program to Print reverse pyramid. 

#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for(i = rows; i >= 1; i--) // Outer loop for each row
     {
        for(j = 1; j <= rows - i; j++) // Inner loop for spaces
         {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) // Inner loop for stars
         {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}