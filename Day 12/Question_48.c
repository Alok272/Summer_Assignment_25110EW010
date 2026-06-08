//Write a program to Write function for perfect number.

#include <stdio.h>
int isPerfect(int n) // Function to check if a number is a perfect number
{
    int sum = 0;
    for (int i = 1; i < n; i++) // Calculate the sum of the proper divisors of n
    {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}