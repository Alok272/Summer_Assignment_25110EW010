// Write a program to Subtract matrices.

#include <stdio.h>
int main() {
    int a[5][5], b[5][5], c[5][5]; // Matrices a, b, and c
    int m, n, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of first matrix:\n"); // Input elements of the first matrix
    for (i = 0; i < m; i++) { 
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n"); // Input elements of the second matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}