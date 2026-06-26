// Write a program to Create mini library system.

#include <stdio.h>
#include <string.h>

int main()
{
    int id[20], choice, n = 0, i, search;
    char name[20][50], author[20][50];

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Total Books\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter Book ID: ");
                scanf("%d", &id[n]);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", author[n]);

                n++;

                printf("Book Added Successfully!\n");
                break;

            case 2:

                if(n == 0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("ID : %d\n", id[i]);
                        printf("Book : %s\n", name[i]);
                        printf("Author : %s\n", author[i]);
                    }
                }

                break;

            case 3:

                printf("Enter Book ID to Search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nBook Found!\n");
                        printf("ID : %d\n", id[i]);
                        printf("Book : %s\n", name[i]);
                        printf("Author : %s\n", author[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Found!\n");

                break;

            case 4:

                printf("Total Books = %d\n", n);
                break;

            case 5:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}