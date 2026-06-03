// Write a program to recursive sum of a digits of a number.

#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Sum of digits of %d is: %d\n", number, sumOfDigits(number));
    return 0;
}