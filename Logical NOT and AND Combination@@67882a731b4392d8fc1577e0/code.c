#include <stdio.h>

int main() {
    int a, b;

    printf("enter two numbers: ");
    scanf("%d %d", &a &b);

    if(!(a > 0) && !(b > 0)) {
        printf("True");
    } else{
        printf("False");
    }
    return 0;
}