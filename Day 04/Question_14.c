// Write a program to find nth Fibonacci term.

#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next;
    printf("Enter the term number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (int i = 1; i < n; ++i) {
        next = first + second;
        first = second;
        second = next;
    }

    printf("The %dth term of the Fibonacci series is: %d\n", n, first);
    return 0;
}