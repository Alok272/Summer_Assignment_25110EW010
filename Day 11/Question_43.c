// Write a program to Write function to check prime.

#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i <= num / 2; i++) // Check for factors from 2 to num/2
    {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    // Call the function to check if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}