// Write a program to count digits in a given number.

#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n /= 10;
        count++;
    }

    printf("The number of digits is: %d\n", count);
    return 0;
}