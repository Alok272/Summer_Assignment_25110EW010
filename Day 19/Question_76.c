// Write a program to Find diagonal sum.

#include <stdio.h>
int main() {
    int a[5][5]; // Matrix a
    int m, n, i, j;
    int primarydiagonalSum = 0, secondarydiagonalSum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of the matrix:\n"); // Input elements of the matrix
    for (i = 0; i < m; i++) { 
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate the sum of primary and secondary diagonals
    for (i = 0; i < m; i++) {
        primarydiagonalSum += a[i][i]; // Primary diagonal element
        secondarydiagonalSum += a[i][n - 1 - i]; // Secondary diagonal element
    }

    printf("Sum of primary diagonal: %d\n", primarydiagonalSum);
    printf("Sum of secondary diagonal: %d\n", secondarydiagonalSum);

    return 0;
}