#include <stdio.h>

// Function to increase each student's marks by 5 and print the array and grades
void increaseMarksAndPrintGrades(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        marks[i] += 5;
    }

    // Print the updated marks and their corresponding grades
    printf("Updated marks and grades:\n");
    for (int i = 0; i < size; i++) {
        printf("Marks: %d - Grade: ", marks[i]);
        if (marks[i] >= 75) {
            printf("A\n");
        } else if (marks[i] >= 60) {
            printf("B\n");
        } else if (marks[i] >= 40) {
            printf("C\n");
        } else {
            printf("D\n");
        }
    }
}

// Function to find the first student who scored 99
void findFirst99(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        if (marks[i] == 99) {
            printf("The first student who scored 99 is at index %d\n", i);
            return;
        }
    }
    printf("No student scored 99\n");
}

int main() {
    int marks[] = {70, 85, 78, 90, 66}; // Example array of student marks
    int size = sizeof(marks) / sizeof(marks[0]);

    increaseMarksAndPrintGrades(marks, size);
    findFirst99(marks, size);

    return 0;
}
