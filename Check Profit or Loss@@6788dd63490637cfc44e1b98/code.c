#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    
    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);
    
    // Calculate and display result
    float result = sellingPrice - costPrice;
    if (result > 0) {
        printf("Profit: %.2f\n", result);
    } else if (result < 0) {
        printf("Loss: %.2f\n", -result);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
