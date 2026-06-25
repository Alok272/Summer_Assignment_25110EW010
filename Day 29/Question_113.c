// Write a program to Create menu-driven calculator.

#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("===== ADVANCE MENU DRIVEN CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square\n");
    printf("6. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero is not possible!\n");
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%f", &a);
            printf("Square = %.2f\n", a * a);
            break;

        case 6: {
            int x, y;
            printf("Enter two integers: ");
            scanf("%d %d", &x, &y);
            printf("Modulus = %d\n", x % y);
            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}