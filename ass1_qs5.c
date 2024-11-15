#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;
    
    // Find all divisors of num excluding the number itself
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;  // Add the divisor to sum
        }
    }
    
    // If sum of divisors equals the number, it is a perfect number
    if (sum == num) {
        return 1; // Perfect number
    } else {
        return 0; // Not a perfect number
    }
}

int main() {
    int num;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check and display whether the number is perfect or not
    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
