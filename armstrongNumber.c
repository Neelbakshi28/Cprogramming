#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int sum = 0;
    int originalNum = num;
    int numDigits = countDigits(num); // Find number of digits
    
    // Calculate the sum of each digit raised to the power of numDigits
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        sum += pow(digit, numDigits);  // Raise it to the power of numDigits and add to sum
        num /= 10;  // Remove the last digit
    }
    
    // If the sum is equal to the original number, it's an Armstrong number
    if (sum == originalNum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is Armstrong
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
