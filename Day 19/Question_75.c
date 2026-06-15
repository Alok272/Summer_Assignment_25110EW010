// Write a program to Transpose matrix.

#include <stdio.h>
int main() {
    int a[5][5], t[5][5]; // Matrix a and its transpose t
    int m, n, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of the matrix:\n"); // Input elements of the matrix
    for (i = 0; i < m; i++) { 
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}