#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    // Display the menu
    while(1) {
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Logarithm (base 10)\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting the calculator. Goodbye!\n");
            break;  // Exit the loop and program
        }

        // Perform the operation based on user's choice
        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    result = log10(num1);  // Logarithm base 10
                    printf("Logarithm of %.2lf is %.2lf\n", num1, result);
                } else {
                    printf("Error! Logarithm is undefined for non-positive numbers.\n");
                }
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);  // Square root
                    printf("Square root of %.2lf is %.2lf\n", num1, result);
                } else {
                    printf("Error! Square root is undefined for negative numbers.\n");
                }
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
