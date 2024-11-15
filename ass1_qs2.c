#include <stdio.h>

// Function to calculate HCF (GCD) using Euclidean Algorithm
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Remainder when a is divided by b
        a = temp;   // Assign b to a
    }
    return a;  // The HCF is stored in a
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display the HCF
    printf("The HCF of %d and %d is %d\n", num1, num2, hcf(num1, num2));

    return 0;
}
