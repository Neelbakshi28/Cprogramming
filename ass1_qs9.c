#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print the left pattern
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        // Print the spaces in the middle
        for (int k = 1; k <= 2 * (n - i); k++) {
            printf(" ");
        }

        // Print the right pattern
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}
