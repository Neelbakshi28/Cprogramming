#include <stdio.h>

// Function to print Pascal's Triangle
void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int number = 1;

        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        // Print numbers in the row
        for (int k = 0; k <= i; k++) {
            printf("%4d", number);
            number = number * (i - k) / (k + 1);
        }
        
        printf("\n");
    }
}

int main() {
    int rows = 5; // Number of rows for Pascal's Triangle
    printPascalsTriangle(rows);
    return 0;
}
