#include <stdio.h>

#define SIZE 3  // Size of the board (3x3)

char board[SIZE][SIZE];  // Tic Tac Toe board

// Function to initialize the game board
void initializeBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';  // Initialize each cell to empty
        }
    }
}

// Function to print the board
void printBoard() {
    printf("\nTic Tac Toe Board:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c", board[i][j]);
            if (j < SIZE - 1) {
                printf(" | ");
            }
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("---------\n");
        }
    }
}

// Function to check if a player has won
int checkWinner() {
    // Check rows and columns
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return 1;  // Row win
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return 1;  // Column win
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return 1;  // Diagonal win
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return 1;  // Diagonal win
    }

    return 0;  // No winner
}

// Function to check if the board is full
int checkFull() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0;  // Space found, board is not full
            }
        }
    }
    return 1;  // Board is full
}

// Function to play the game
void playGame() {
    int row, col;
    int playerTurn = 0;  // 0 for Player 1 ('X'), 1 for Player 2 ('O')

    initializeBoard();  // Initialize the board
    printBoard();  // Print the initial board

    while (1) {
        // Ask for player input
        printf("\nPlayer %d, enter your move (row and column): ", playerTurn + 1);
        scanf("%d %d", &row, &col);

        // Validate the input
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Make the move
        board[row][col] = (playerTurn == 0) ? 'X' : 'O';

        // Print the updated board
        printBoard();

        // Check if the player has won
        if (checkWinner()) {
            printf("\nPlayer %d wins!\n", playerTurn + 1);
            break;
        }

        // Check if the board is full (draw)
        if (checkFull()) {
            printf("\nIt's a draw!\n");
            break;
        }

        // Switch player turns
        playerTurn = 1 - playerTurn;
    }
}

int main() {
    printf("Welcome to Tic Tac Toe!\n");
    playGame();  // Start the game
    return 0;
}
