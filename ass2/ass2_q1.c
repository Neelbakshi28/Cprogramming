#include <stdio.h>

// Function to increase each student's marks by 5 and print the array
void increaseMarks(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        marks[i] += 5;
    }

    // Print the updated marks
    printf("Updated marks:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
}

int main() {
    int marks[] = {70, 85, 78, 90, 66}; // Example array of student marks
    int size = sizeof(marks) / sizeof(marks[0]);

    increaseMarks(marks, size);

    return 0;
}
