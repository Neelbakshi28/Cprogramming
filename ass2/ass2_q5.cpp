#include <stdio.h>

int main() {
    int marks[] = {95, 99, 88, 76, 85};  // Example array of marks
    int n = sizeof(marks) / sizeof(marks[0]);  // Number of elements in the array
    int sum = 0;

    // Calculate the sum of all marks
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    // Calculate the average score
    double average = (double)sum / n;

    printf("Average score: %.2f\n", average);

    return 0;
}
