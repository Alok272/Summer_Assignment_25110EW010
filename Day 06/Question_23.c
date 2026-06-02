// Write a program to count set bits in a given number.

#include <stdio.h>
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int setBits = countSetBits(number);
    printf("Number of set bits in %d is: %d\n", number, setBits);

    return 0;
}

