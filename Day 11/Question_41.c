// Write a program to Write function to find sum of two numbers.

#include <stdio.h>
// Function to find the sum of two numbers
int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    sum = findSum(num1, num2); // Call the function to find the sum
    
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    
    return 0;
}
