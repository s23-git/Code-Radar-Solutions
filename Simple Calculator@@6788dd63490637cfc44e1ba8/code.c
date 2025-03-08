#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    // Reading two integers and an operator
    scanf("%d %d %c", &num1, &num2, &operator);

    // Switch statement to handle arithmetic operations
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("error\n"); // Division by zero error
            }
            break;
        default:
            printf("error\n"); // Invalid operator error
            break;
    }

    return 0;
}
