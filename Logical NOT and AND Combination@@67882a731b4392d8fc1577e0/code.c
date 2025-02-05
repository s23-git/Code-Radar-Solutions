#include <stdio.h>

int main() {
    int num1, num2;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (!(num1 < 0 ) && !(num2 < 0)) {
        printf("Neither of two is greater than zero");
    } else{
        printf("At least one number is greater than zero");
    }
    return 0;
}