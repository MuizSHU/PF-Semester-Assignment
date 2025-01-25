#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to display the instructions
void displayInstructions() {
    printf("Welcome to the Guessing Game!\n");
    printf("I have thought of a number between 1 and 100.\n");
    printf("Your task is to guess it.\n");
    printf("You will be given 4 attempts to guess the number.\n");
    printf("After each incorrect guess, I will give you a hint: whether your guess is too small or too large.\n");
    printf("Let's start the game!\n\n");
}

// Function to play the guessing game
void playGame() {
    int number, guess, attempts = 0;
    char choice;

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    while (1) {
        attempts = 0;
        printf("I have thought of a number between 1 and 100.\n");

        while (attempts < 4) {
            printf("Attempt %d: Enter your guess: ", attempts + 1);
            scanf("%d", &guess);

            if (guess < number) {
                printf("Your guess is too small!\n");
            } else if (guess > number) {
                printf("Your guess is too large!\n");
            } else {
                printf("Congratulations! You've guessed the correct number %d!\n", number);
                break;
            }
            attempts++;
        }

        if (attempts == 4) {
            printf("Sorry! You've used all your attempts. The correct number was %d.\n", number);
        }

        // Ask the user if they want to continue playing
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &choice);  // The space before %c is to ignore any leftover newline characters

        if (choice != 'y' && choice != 'Y') {
            printf("Thanks for playing! Goodbye.\n");
            break;
        }
    }
}

int main() {
    // Initialize the random number generator
    srand(time(0));

    // Display the instructions
    displayInstructions();

    // Start the game
    playGame();

    return 0;
}
