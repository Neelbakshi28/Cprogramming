#include <stdio.h>

// 1. Method 1: Using a Temporary Variable
void swapUsingTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 2. Method 2: Using Arithmetic Operations (Without Extra Memory)
void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;  // a = a + b
    *b = *a - *b;  // b = (a + b) - b = a
    *a = *a - *b;  // a = (a + b) - a = b
}

// 3. Method 3: Using Bitwise XOR
void swapUsingXOR(int *a, int *b) {
    *a = *a ^ *b;  // a = a ^ b
    *b = *a ^ *b;  // b = (a ^ b) ^ b = a
    *a = *a ^ *b;  // a = (a ^ b) ^ a = b
}

// 4. Method 4: Using Pointers (By Reference)
void swapUsingPointers(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
    // Note: This won't work as intended because it modifies local pointer variables, not the actual values.
    // So we typically do this with dereferencing to change the values, hence method 3 works better for reference swapping.
}

int main() {
    int num1, num2;
    
    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Display original values
    printf("\nOriginal values: num1 = %d, num2 = %d\n", num1, num2);

    // Method 1: Using a Temporary Variable
    swapUsingTemp(&num1, &num2);
    printf("\nAfter swap using temporary variable: num1 = %d, num2 = %d\n", num1, num2);

    // Re-enter original values
    printf("\nRe-enter original values: ");
    scanf("%d %d", &num1, &num2);
    
    // Method 2: Using Arithmetic Operations
    swapUsingArithmetic(&num1, &num2);
    printf("\nAfter swap using arithmetic operations: num1 = %d, num2 = %d\n", num1, num2);

    // Re-enter original values
    printf("\nRe-enter original values: ");
    scanf("%d %d", &num1, &num2);

    // Method 3: Using Bitwise XOR
    swapUsingXOR(&num1, &num2);
    printf("\nAfter swap using bitwise XOR: num1 = %d, num2 = %d\n", num1, num2);

    // Re-enter original values
    printf("\nRe-enter original values: ");
    scanf("%d %d", &num1, &num2);
    
    // Method 4: Using Pointers (incorrect for real swaps as explained, so we won't actually swap here)

    return 0;
}
