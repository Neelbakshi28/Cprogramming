#include <stdio.h>

int main() {
    int marks[] = {95, 99, 88, 76, 85};  // Example array of marks
    int n = sizeof(marks) / sizeof(marks[0]);  // Number of elements in the array

    // Check each number in the array whether it is odd or even
    for (int i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) {
            printf("Marks[%d] = %d is even\n", i, marks[i]);
        } else {
            printf("Marks[%d] = %d is odd\n", i, marks[i]);
        }
    }

    return 0;
}
