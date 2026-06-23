// Write a program to Create salary management system.

#include <stdio.h>

int main() {
    int empId;
    char name[50];
    float basicSalary, hra, da, netSalary;

    printf("===== SALARY MANAGEMENT SYSTEM =====\n");

    printf("Enter Employee ID : ");
    scanf("%d", &empId);

    getchar(); // Clear buffer

    printf("Enter Employee Name : ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Basic Salary : ");
    scanf("%f", &basicSalary);

    hra = basicSalary * 0.20;  // 20% HRA(House Rent Allowance)
    da  = basicSalary * 0.10;  // 10% DA(Dearness Allowance)

    netSalary = basicSalary + hra + da;

    printf("\n========== SALARY REPORT ==========\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s", name);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("HRA (20%%)     : %.2f\n", hra);
    printf("DA (10%%)      : %.2f\n", da);
    printf("Net Salary    : %.2f\n", netSalary);
    printf("===================================\n");

    return 0;
}