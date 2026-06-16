// Write a program to Multiply matrices.

#include <stdio.h>
int main() {
    int a[5][5], b[5][5], c[5][5]; // Matrices a, b, and c
    int m, n, p, q, i, j, k;

    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &p, &q);

    if (n!= p) {
        printf("Matrix multiplication is not possible. Number of columns of first matrix must be equal to number of rows of second matrix.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n"); // Input elements of the first matrix
    for (i=0; i<m; i++) { 
        for (j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n"); // Input elements of the second matrix
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix c with zeros
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}