#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%d", &num2);
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", (float)num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
