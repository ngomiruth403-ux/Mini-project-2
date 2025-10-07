#include <stdio.h>

int main() {
    double num1, num2, result;
    char operation;

    // Ask user for input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation); // Note the space before %c to catch newline

    // Perform operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.
