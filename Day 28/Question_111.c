// Write a program to Create ticket booking system.

#include <stdio.h>

int main() {
    char passengerName[50];
    char trainName[50];
    char source[50];
    char destination[50];
    char coach[20];
    int tickets;
    float fare, totalFare;

    printf("========== IRCTC TICKET BOOKING SYSTEM ==========\n");

    printf("Enter Passenger Name : ");
    fgets(passengerName, sizeof(passengerName), stdin);

    printf("Enter Train Name : ");
    fgets(trainName, sizeof(trainName), stdin);

    printf("Enter Source Station : ");
    fgets(source, sizeof(source), stdin);

    printf("Enter Destination Station : ");
    fgets(destination, sizeof(destination), stdin);

    printf("Enter Coach (SL/3A/2A/CC) : ");
    scanf("%s", coach);

    printf("Enter Number of Tickets : ");
    scanf("%d", &tickets);

    // Coach ke hisab se fare
    if (coach[0] == 'S') // SL
        fare = 450;
    else if (coach[1] == 'A' && coach[0] == '3') // 3A
        fare = 900;
    else if (coach[1] == 'A' && coach[0] == '2') // 2A
        fare = 1300;
    else
        fare = 800; // CC

    totalFare = fare * tickets;

    // Display ticket details
    printf("\n============== E-TICKET ==============\n");
    printf("Passenger Name : %s", passengerName);
    printf("Train Name     : %s", trainName);
    printf("Source         : %s", source);
    printf("Destination    : %s", destination);
    printf("Coach          : %s\n", coach);
    printf("Tickets        : %d\n", tickets);
    printf("Fare/Ticket    : Rs %.2f\n", fare);
    printf("Total Fare     : Rs %.2f\n", totalFare);
    printf("Booking Status : CONFIRMED\n");
    printf("PNR Number     : 1234567890\n");
    printf("======================================\n");

    return 0;
}