#include <stdio.h>

int main() {
    int marks[] = {95, 99, 88, 76, 85};  // Example array of marks
    int n = sizeof(marks) / sizeof(marks[0]);  // Number of elements in the array

    // Initialize max and min with the first element of the array
    int max = marks[0];
    int min = marks[0];

    // Iterate through the array to find max and min
    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }

    printf("Maximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);

    return 0;
}
