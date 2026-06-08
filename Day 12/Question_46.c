//Write a program to Write function for Armstrong number.

#include <stdio.h>
#include <math.h>

int isArmstrong(int n) // Function to check if a number is an Armstrong number
{
    int original = n;
    int sum = 0;
    int digit;

    while (n > 0) // Calculate the sum of the cubes of the digits
     {
        digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }

    if (sum == original)  // Check if the sum of the cubes of the digits is equal to the original number
    {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}