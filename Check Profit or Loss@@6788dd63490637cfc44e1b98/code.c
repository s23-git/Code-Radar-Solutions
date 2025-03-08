#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);
    
    if (sellingPrice > costPrice)
        printf("Profit\n");
    else if (sellingPrice < costPrice)
        printf("Loss\n");
    else
        printf("No Profit, No Loss\n");

    return 0;
}
