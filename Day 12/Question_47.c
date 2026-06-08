//Write a program to Write function for Fibonacci series.

#include <stdio.h>

int fibonacci(int n) // Function to calculate the nth Fibonacci number
{
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci series: ");
    for (int i = 0; i < num; i++) // Print the Fibonacci series up to the specified number of terms
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}