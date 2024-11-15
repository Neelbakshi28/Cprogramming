	#include <stdio.h>

// Function to add two numbers using bitwise operations
int add(int a, int b) {
    while (b != 0) {
        // Carry now contains common set bits of a and b
        int carry = a & b;

        // Sum of bits of a and b where at least one of the bits is not set
        a = a ^ b;

        // Carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }
    return a;
}

// Function to subtract b from a using bitwise operations
int subtract(int a, int b) {
    // To subtract, we add a and the two's complement of b
    return add(a, add(~b, 1)); // a + (-b) is the same as a - b
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Subtract the numbers and print the result
    printf("The result of %d - %d is: %d\n", num1, num2, subtract(num1, num2));

    return 0;
}
