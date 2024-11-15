#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;  // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;  // num is divisible by i, so it's not prime
        }
    }
    return true;  // num is prime
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array
    int primeCount = 0;

    // Count the number of prime numbers in the array
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    printf("Number of prime numbers in the array: %d\n", primeCount);

    return 0;
}
