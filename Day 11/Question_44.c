// Write a program to write function to find factorial of a number.

#include <stdio.h>
int factorial(int num) 
{
    if (num < 0) {
        return -1;  
    }
    if (num == 0 || num == 1) {
        return 1;  // Factorial of 0 and 1 is 1
    }
    int result = 1;
    for (int i = 2; i <= num; i++) // Calculate factorial iteratively
    {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int fact = factorial(num); // Call the function to find the factorial
    
    if (fact == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, fact);
    }
    
    return 0;
}