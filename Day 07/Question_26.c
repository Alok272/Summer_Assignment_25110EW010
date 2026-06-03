// Write a program to recursive fibonacci of a number.

#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Fibonacci of %d is: %d\n", number, fibonacci(number));
    return 0;
}