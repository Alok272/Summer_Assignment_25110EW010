// Write a program to Create bank account system.

#include <stdio.h>

int main() {
    int accountNo;
    char name[50];
    float balance, deposit, withdraw;

    printf("===== BANK ACCOUNT SYSTEM =====\n");

    printf("Enter Account Number : ");
    scanf("%d", &accountNo);

    getchar();

    printf("Enter Account Holder Name : ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Initial Balance : ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount : ");
    scanf("%f", &deposit);

    balance = balance + deposit; // Update balance after deposit

    printf("Enter Withdrawal Amount : ");
    scanf("%f", &withdraw);

    if (withdraw <= balance)
    {
        balance = balance - withdraw;
        printf("Withdrawal Successful!\n");
    } 
    else 
    {
        printf("Insufficient Balance!\n");
    }
    // Display account details
    printf("\n========== ACCOUNT DETAILS ==========\n");
    printf("Account Number : %d\n", accountNo);
    printf("Account Holder : %s", name);
    printf("Current Balance: %.2f\n", balance);
    printf("=====================================\n");

    return 0;
}