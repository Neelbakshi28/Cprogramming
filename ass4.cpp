#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get computer's choice based on ranges
int getComputerChoice() {
    int randomValue = rand() % 101;  // Generate a random number between 0 and 100

    if (randomValue >= 0 && randomValue <= 33) {
        return 0;  // Rock
    } else if (randomValue >= 34 && randomValue <= 66) {
        return 1;  // Paper
    } else {
        return 2;  // Scissors
    }
}

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||  // Rock beats Scissors
               (userChoice == 1 && computerChoice == 0) ||  // Paper beats Rock
               (userChoice == 2 && computerChoice == 1)) { // Scissors beats Paper
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int userChoice, computerChoice;

    // Seed the random number generator
    srand(time(NULL));

    // Instructions
    printf("Rock, Paper, Scissors Game\n");
    printf("Choose an option:\n");
    printf("0. Rock\n");
    printf("1. Paper\n");
    printf("2. Scissors\n");

    // Get user's choice
    printf("Enter your choice (0, 1, or 2): ");
    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid input! Please enter 0, 1, or 2.\n");
        return 1;  // Exit the program due to invalid input
    }

    // Get computer's choice
    computerChoice = getComputerChoice();
    printf("Computer's choice: ");
    if (computerChoice == 0) {
        printf("Rock\n");
    } else if (computerChoice == 1) {
        printf("Paper\n");
    } else {
        printf("Scissors\n");
    }

    // Determine and display the winner
    determineWinner(userChoice, computerChoice);

    return 0;
}
