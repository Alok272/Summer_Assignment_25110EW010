// Write a program to Create library management system.


#include <stdio.h>

int main() {
    int bookId;
    char bookName[50];
    char author[50];
    char status;

    printf("===== LIBRARY MANAGEMENT SYSTEM =====\n");

    printf("Enter Book ID : ");
    scanf("%d", &bookId);

    getchar();

    printf("Enter Book Name : ");
    fgets(bookName, sizeof(bookName), stdin);

    printf("Enter Author Name : ");
    fgets(author, sizeof(author), stdin);

    printf("Is Book Issued? (Y/N) : ");
    scanf(" %c", &status);
    
    // Display book details
    printf("\n========== BOOK RECORD ==========\n");
    printf("Book ID     : %d\n", bookId);
    printf("Book Name   : %s", bookName);
    printf("Author Name : %s", author);

    if (status == 'Y' || status == 'y')
        printf("Status      : Issued\n");
    else
        printf("Status      : Available\n");

    printf("=================================\n");

    return 0;
}