// Write a program to Find column-wise sum.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Column-wise sums:\n");
    for (int j = 0; j < cols; j++) { // Loop through each column
        int sum = 0;
        for (int i = 0; i < rows; i++) { // Loop through each row in the current column
            sum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }

    return 0;
}