// Write a program to Check symmetric matrix.

#include <stdio.h>
int main() {
    int a[5][5]; // Matrix a
    int m, n, i, j;
    int Symmetric = 1; // Flag to check if the matrix is symmetric

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    if (m != n) {
        printf("Matrix must be square to be symmetric.\n");
        return 1;
    }

    printf("Enter elements of the matrix:\n"); // Input elements of the matrix
    for (i = 0; i < m; i++) { 
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if the matrix is symmetric
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        {
            if (a[i][j]!= a[j][i])
            {
                Symmetric = 0; // Set flag to false if any element does not match
                break;
            }
        }
        if (!Symmetric) {
            break;
        }
    }

    if (Symmetric)
    {
        printf("The matrix is symmetric.\n");
    }
     else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}