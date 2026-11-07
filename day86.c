// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

// Define an enum for menu choices
enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    double num1, num2, result = 0;

    // Display the menu
    printf("--- Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Prompt for numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation using switch with enum values
    switch ((enum MenuChoice)choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        default:
            printf("Invalid menu choice!\n");
            break;
    }

    return 0;
}

