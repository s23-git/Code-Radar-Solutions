#include <stdio.h>

int main() {
    int transaction;
    
    scanf("%d", &transaction);
    
    if (transaction > 0) {
        printf("Profit\n");
    } else if (transaction < 0) {
        printf("Loss\n");
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
