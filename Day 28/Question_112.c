// Write a program to Create contact management system.

#include <stdio.h>

int main() {
    char name[50];
    char mobile[15];
    char email[50];
    char address[100];

    printf("===== CONTACT MANAGEMENT SYSTEM =====\n");

    printf("Enter Contact Name : ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Mobile Number : ");
    fgets(mobile, sizeof(mobile), stdin);

    printf("Enter Email Address : ");
    fgets(email, sizeof(email), stdin);

    printf("Enter Address : ");
    fgets(address, sizeof(address), stdin);

    printf("\n========== CONTACT DETAILS ==========\n");
    printf("Name    : %s", name);
    printf("Mobile  : %s", mobile);
    printf("Email   : %s", email);
    printf("Address : %s", address);
    printf("=====================================\n");

    return 0;
}

