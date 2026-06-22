// Number Guessing Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Random number generate karne ke liye
    srand(time(0));
    secretNumber = rand() % 100 + 1;   // 1 se 100 ke beech

    printf("=== Number Guessing Game ===\n");
    printf("1 se 100 ke beech ek number guess karo.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too High! Try Again.\n");
        }
        else if (guess < secretNumber) {
            printf("Too Low! Try Again.\n");
        }
        else {
            printf("Congratulations! You guessed the number.\n");
            printf("Total Attempts = %d\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}