// Write a program to Create student record management system.

#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float marks, percentage;

    printf("===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");

    printf("Enter Roll Number : ");
    scanf("%d", &rollNo);

    getchar(); // Clear input buffer

    printf("Enter Student Name : ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Marks (Out of 70) : ");
    scanf("%f", &marks);

    percentage = (marks / 70) * 100;

    printf("\n========== STUDENT REPORT ==========\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s", name);
    printf("Marks       : %.2f / 70\n", marks);
    printf("Percentage  : %.2f%%\n", percentage);

    if (marks >= 21)
        printf("Result      : PASS\n");
    else
        printf("Result      : FAIL\n");

    // Grade Calculation
    if (percentage >= 90)
        printf("Grade       : A+\n");
    else if (percentage >= 80)
        printf("Grade       : A\n");
    else if (percentage >= 70)
        printf("Grade       : B\n");
    else if (percentage >= 60)
        printf("Grade       : C\n");
    else if (percentage >= 50)
        printf("Grade       : D\n");
    else if (marks >= 21)
        printf("Grade       : E\n");
    else
        printf("Grade       : F\n");

    printf("====================================\n");

    return 0;
}