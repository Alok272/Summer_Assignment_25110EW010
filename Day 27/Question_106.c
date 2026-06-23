// Write a program to Create employee management system.

#include <stdio.h>

int main() {
    int empId;
    char name[50];
    float basicSalary, bonus, totalSalary;

    printf("===== EMPLOYEE MANAGEMENT SYSTEM =====\n");

    printf("Enter Employee ID : ");
    scanf("%d", &empId);

    getchar(); // Clear buffer

    printf("Enter Employee Name : ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Basic Salary : ");
    scanf("%f", &basicSalary);

    bonus = basicSalary * 0.10; // 10% Bonus
    totalSalary = basicSalary + bonus;

    printf("\n========== EMPLOYEE REPORT ==========\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s", name);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("Bonus (10%%)   : %.2f\n", bonus);
    printf("Total Salary  : %.2f\n", totalSalary);
    printf("=====================================\n");

    return 0;
}