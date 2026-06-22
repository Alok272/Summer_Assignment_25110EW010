// Write a program to Create quiz application.
#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("Welcome to the Quiz Application!\n");

    // Question 1
    printf("\nQuestion 1: Who won the FIFA World Cup in 2022?\n");
    printf("a) France\nb) Argentina\nc) Brazil\nd) Germany\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'b' || answer == 'B') {
        score++;
        printf("Correct!\n");
    } else {
        printf("Wrong! The correct answer is b) Argentina.\n");
    }

    // Question 2
    printf("\nQuestion 2: What is the benefit of doing DSA?\n");
    printf("a) Improves problem-solving skills\n");
    printf("b) Makes code more efficient\n");
    printf("c) Helps in coding interviews\n");
    printf("d) All of the above\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'd' || answer == 'D') {
        score++;
        printf("Correct!\n");
    } else {
        printf("Wrong! The correct answer is d) All of the above.\n");
    }

    printf("\nYour final score is: %d out of 2\n", score);

    return 0;
}