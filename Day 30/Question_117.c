// Write a program to Create student record system using arrays and strings.

#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int roll[n];
    float marks[n], percentage[n];
    char name[n][50];
    char grade[n];

    // Input
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]); // To read string with spaces

        printf("Enter Marks (Out of 70): ");
        scanf("%f", &marks[i]);

        // Percentage
        percentage[i] = (marks[i] / 70) * 100;

        // Grade
        if (percentage[i] >= 90)
            grade[i] = 'A';
        else if (percentage[i] >= 75)
            grade[i] = 'B';
        else if (percentage[i] >= 60)
            grade[i] = 'C';
        else if (percentage[i] >= 40)
            grade[i] = 'D';
        else
            grade[i] = 'F';
    }

    // Display Student Records
    printf("\n========== Student Records ==========\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %.2f / 70\n", marks[i]);
        printf("Percentage  : %.2f%%\n", percentage[i]);
        printf("Grade       : %c\n", grade[i]);
    }

    return 0;
}