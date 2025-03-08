#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    
    // Input cost price and selling price
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);
    
    // Determine profit, loss, or no profit
    if (sellingPrice > costPrice) {
        printf("Profit: %.2f\n", sellingPrice - costPrice);
    } else if (sellingPrice < costPrice) {
        printf("Loss: %.2f\n", costPrice - sellingPrice);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
