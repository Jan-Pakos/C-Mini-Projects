#include <stdio.h>
#include <stdlib.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    char operator;
    float num1, num2, result;
    int continue_calc = 1;

    while (continue_calc) {
        // Get the operator from the user
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        // Get two numbers from the user
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Perform the calculation based on the operator
        switch (operator) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                if (num2 != 0) {
                    result = divide(num1, num2);
                } else {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                break;
            default:
                printf("Error: Invalid operator!\n");
                continue;
        }

        // Display the result
        printf("Result: %.2f\n", result);

        // Ask if the user wants to perform another calculation
        printf("Do you want to perform another calculation? (1 for yes, 0 for no): ");
        scanf("%d", &continue_calc);
    }

    printf("Thank you for using the calculator. Goodbye!\n");
    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
