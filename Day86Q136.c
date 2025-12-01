//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum operation {ADD, SUBTRACT, MULTIPLY};

int main() {
    enum operation choice;
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Choose operation (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY): ");
    scanf("%d", (int*)&choice);
    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
