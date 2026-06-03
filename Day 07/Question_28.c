// Write a program to recursive reverse of a number.

#include <stdio.h>
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    rev = rev * 10 + n % 10;
    return reverseNumber(n / 10, rev);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversed = reverseNumber(number, 0);
    printf("Reverse of %d is: %d\n", number, reversed);
    return 0;
}