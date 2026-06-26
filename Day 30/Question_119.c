// Write a program to Create mini employee management system.

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int choice, count = 0, i;

    while (1) 
    {  // Infinite loop to keep the program running until the user chooses to exit
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Total Employees\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                if (count == 100)
                {
                    printf("Employee List is Full!\n");
                    break;
                }

                printf("Enter Employee ID: "); // Prompt the user to enter the employee ID
                scanf("%d", &emp[count].id);

                printf("Enter Employee Name: "); // Prompt the user to enter the employee name
                scanf(" %[^\n]", emp[count].name);

                printf("Enter Department: "); // Prompt the user to enter the employee department
                scanf(" %[^\n]", emp[count].department);

                printf("Enter Salary: "); // Prompt the user to enter the employee salary
                scanf("%f", &emp[count].salary);

                count++; // Increment the count of employees after adding a new employee

                printf("Employee Added Successfully!\n");
                break;

            case 2:

                if (count == 0)
                {
                    printf("No Employee Records Found!\n");
                }
                else
                {
                    printf("\n===== EMPLOYEE DETAILS =====\n");
                    // Loop through the employee array and display each employee's details
                    for (i = 0; i < count; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:

                printf("Total Employees = %d\n", count);
                break;

            case 4:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}