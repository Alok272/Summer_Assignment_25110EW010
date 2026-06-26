// Write a program to Develop complete mini project using arrays, strings and functions. 


#include <stdio.h>
#include <string.h>

struct Team
{
    int id;
    char country[50];
    char group;
    int matches;
    int win;
    int draw;
    int loss;
    int points;
};

struct Team t[50];
int n = 0;

void addTeam();
void displayTeams();
void searchTeam();
void updateTeam();
void deleteTeam();
void topTeam();

int main()
{
    int choice;

    do
    {
        printf("\n========== FIFA WORLD CUP 2026 MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Team\n");
        printf("2. Display Teams\n");
        printf("3. Search Team\n");
        printf("4. Update Team\n");
        printf("5. Delete Team\n");
        printf("6. Display Top Team\n");
        printf("7. Total Teams\n");
        printf("8. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addTeam(); break;
            case 2: displayTeams(); break;
            case 3: searchTeam(); break;
            case 4: updateTeam(); break;
            case 5: deleteTeam(); break;
            case 6: topTeam(); break;
            case 7: printf("Total Teams = %d\n", n); break;
            case 8: printf("Thank You!\n"); break;
            default: printf("Invalid Choice!\n");
        }

    }while(choice != 8);

    return 0;
}

void addTeam()
{
    if(n == 50)
    {
        printf("Team List is Full!\n");
        return;
    }

    printf("Enter Team ID: ");
    scanf("%d",&t[n].id);

    printf("Enter Country Name: ");
    scanf(" %[^\n]",t[n].country);

    printf("Enter Group (A-L): ");
    scanf(" %c",&t[n].group);

    printf("Enter Matches Played: ");
    scanf("%d",&t[n].matches);

    printf("Enter Wins: ");
    scanf("%d",&t[n].win);

    printf("Enter Draws: ");
    scanf("%d",&t[n].draw);

    printf("Enter Losses: ");
    scanf("%d",&t[n].loss);

    t[n].points = (t[n].win * 3) + t[n].draw;

    n++;

    printf("Team Added Successfully!\n");
}

void displayTeams()
{
    int i;

    if(n == 0)
    {
        printf("No Teams Available!\n");
        return;
    }

    printf("\n============= TEAM DETAILS =============\n");

    for(i = 0; i < n; i++)
    {
        printf("\nTeam %d\n", i + 1);
        printf("ID       : %d\n", t[i].id);
        printf("Country  : %s\n", t[i].country);
        printf("Group    : %c\n", t[i].group);
        printf("Matches  : %d\n", t[i].matches);
        printf("Wins     : %d\n", t[i].win);
        printf("Draws    : %d\n", t[i].draw);
        printf("Losses   : %d\n", t[i].loss);
        printf("Points   : %d\n", t[i].points);
    }
}

void searchTeam()
{
    char name[50];
    int i, found = 0;

    printf("Enter Country Name: ");
    scanf(" %[^\n]", name);

    for(i = 0; i < n; i++)
    {
        if(strcmp(name, t[i].country) == 0)
        {
            printf("\nTeam Found!\n");
            printf("ID       : %d\n", t[i].id);
            printf("Country  : %s\n", t[i].country);
            printf("Group    : %c\n", t[i].group);
            printf("Matches  : %d\n", t[i].matches);
            printf("Wins     : %d\n", t[i].win);
            printf("Draws    : %d\n", t[i].draw);
            printf("Losses   : %d\n", t[i].loss);
            printf("Points   : %d\n", t[i].points);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Team Not Found!\n");
}

void updateTeam()
{
    int id, i, found = 0;

    printf("Enter Team ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(t[i].id == id)
        {
            printf("Enter Matches Played: ");
            scanf("%d", &t[i].matches);

            printf("Enter Wins: ");
            scanf("%d", &t[i].win);

            printf("Enter Draws: ");
            scanf("%d", &t[i].draw);

            printf("Enter Losses: ");
            scanf("%d", &t[i].loss);

            t[i].points = (t[i].win * 3) + t[i].draw;

            printf("Team Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Team Not Found!\n");
}

void deleteTeam()
{
    int id, i, j, found = 0;

    printf("Enter Team ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(t[i].id == id)
        {
            for(j = i; j < n - 1; j++)
            {
                t[j] = t[j + 1];
            }

            n--;
            printf("Team Deleted Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Team Not Found!\n");
}

void topTeam()
{
    int i, max = 0;

    if(n == 0)
    {
        printf("No Teams Available!\n");
        return;
    }

    for(i = 1; i < n; i++)
    {
        if(t[i].points > t[max].points)
            max = i;
    }

    printf("\n========== TOP TEAM ==========\n");
    printf("Country : %s\n", t[max].country);
    printf("Group   : %c\n", t[max].group);
    printf("Points  : %d\n", t[max].points);
}
