#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6

// Function to print the hangman status
void printHangman(int tries) {
    switch (tries) {
        case 0:
            printf("\n  -----\n  |   |\n      |\n      |\n      |\n      |\n     ---\n");
            break;
        case 1:
            printf("\n  -----\n  |   |\n  O   |\n      |\n      |\n      |\n     ---\n");
            break;
        case 2:
            printf("\n  -----\n  |   |\n  O   |\n  |   |\n      |\n      |\n     ---\n");
            break;
        case 3:
            printf("\n  -----\n  |   |\n  O   |\n /|   |\n      |\n      |\n     ---\n");
            break;
        case 4:
            printf("\n  -----\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n     ---\n");
            break;
        case 5:
            printf("\n  -----\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n     ---\n");
            break;
        case 6:
            printf("\n  -----\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n     ---\n");
            break;
    }
}

// Function to display the word with guessed letters and underscores
void displayWord(char *word, int *guessed, int wordLength) {
    for (int i = 0; i < wordLength; i++) {
        if (guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

// Function to check if the player has won
int checkWin(int *guessed, int wordLength) {
    for (int i = 0; i < wordLength; i++) {
        if (!guessed[i]) {
            return 0; // Game not won yet
        }
    }
    return 1; // All letters guessed
}

int main() {
    char word[] = "hangman";  // Word to guess
    int wordLength = strlen(word);
    int guessed[wordLength];  // Array to keep track of guessed letters
    int tries = 0;            // Number of incorrect guesses
    char guess;               // User's guessed letter
    int gameOver = 0;         // Flag for game over status

    // Initialize guessed array to 0 (not guessed)
    for (int i = 0; i < wordLength; i++) {
        guessed[i] = 0;
    }

    printf("Welcome to Hangman Game!\n");

    // Main game loop
    while (tries < MAX_TRIES && !gameOver) {
        printf("\nWord to guess: ");
        displayWord(word, guessed, wordLength);

        printf("You have %d tries left.\n", MAX_TRIES - tries);
        printHangman(tries);

        // Ask for the user's guess
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess); // Convert to lowercase

        // Check if the guessed letter is in the word
        int correctGuess = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;  // Mark this letter as guessed
                correctGuess = 1;
            }
        }

        if (correctGuess == 0) {
            tries++;  // Incorrect guess, increment tries
            printf("Wrong guess!\n");
        }

        // Check if the player has won
        gameOver = checkWin(guessed, wordLength);
    }

    // End of the game
    if (gameOver) {
        printf("\nCongratulations! You've guessed the word correctly: %s\n", word);
    } else {
        printf("\nGame Over! The word was: %s\n", word);
        printHangman(tries);
    }

    return 0;
}
