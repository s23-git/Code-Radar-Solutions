#include <stdio.h>

int main() {
    int num1, num2;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (! (num1 > 0 ) && ! (num2 > 0)) {
        printf("True");
    } else{
        printf("False");
    }
    return 0;
}