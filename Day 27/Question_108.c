// Write a program to Create marksheet generation system.

#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("===== MARKSHEET GENERATION SYSTEM =====\n");

    printf("Enter Roll Number : ");
    scanf("%d", &rollNo);

    getchar();

    printf("Enter Student Name : ");
    fgets(name, sizeof(name), stdin);
    // Input marks for subjects
    printf("Enter Marks of Subject 1 (Out of 70): ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2 (Out of 70): ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3 (Out of 70): ");
    scanf("%f", &m3);

    printf("Enter Marks of Subject 4 (Out of 70): ");
    scanf("%f", &m4);

    printf("Enter Marks of Subject 5 (Out of 70): ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5; // Calculate total marks
    percentage = (total / 350) * 100; // Calculate percentage

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s", name);
    printf("Total Marks : %.2f / 350\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    // Determine pass/fail and grade
    if (percentage >= 33)
        printf("Result      : PASS\n");
    else
        printf("Result      : FAIL\n");

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
    else if (percentage >= 33)
        printf("Grade       : E\n");
    else
        printf("Grade       : F\n");

    printf("===============================\n");

    return 0;
}