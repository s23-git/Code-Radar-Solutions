#include <stdio.h>

int main() {
    int costPrice, sellingPrice;
    
    printf("Enter Cost Price: ");
    scanf("%d", &costPrice);
    
    printf("Enter Selling Price: ");
    scanf("%d", &sellingPrice);
    
    if (sellingPrice > costPrice)
        printf("Profit\n");
    else if (sellingPrice < costPrice)
        printf("Loss\n");
    else
        printf("No Profit, No Loss\n");

    return 0;
}
