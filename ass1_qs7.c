#include <stdio.h>

int main() {
    float x, y;

    // Accept input for x and y coordinates
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    // Check in which quadrant the point lies
    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the 1st quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the 2nd quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the 3rd quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the 4th quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The point (%.2f, %.2f) lies on the x-axis.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) is at the origin.\n", x, y);
    }

    return 0;
}
