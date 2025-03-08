#include <stdio.h>

int main() {
    int costPrice, sellingPrice;
    
    // Input: Two space-separated integers
    scanf("%d %d", &costPrice, &sellingPrice);
    
    // Determine the result of the transaction
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}