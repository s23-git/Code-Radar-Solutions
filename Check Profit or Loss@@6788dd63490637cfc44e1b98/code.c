#include <stdio.h>

int main() {
    int transaction;
    
    printf("Enter Transaction Amount (positive for profit, negative for loss, zero for no profit): ");
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
