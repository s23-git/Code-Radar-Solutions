#include <stdio.h>

int main() {
    float f;
    
    printf("You entered: ")
    scanf("%f", &f);

    printf("%.2f\n", f);
    return 0;
}