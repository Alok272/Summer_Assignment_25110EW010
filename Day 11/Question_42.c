// Write a program to Write function to find maximum.

#include <stdio.h>
 // Function to find the maximum of two numbers
int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2, max;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    max = findMaximum(num1, num2); // Call the function to find the maximum
    
    printf("Maximum of %d and %d is %d\n", num1, num2, max);
    
    return 0;
}
