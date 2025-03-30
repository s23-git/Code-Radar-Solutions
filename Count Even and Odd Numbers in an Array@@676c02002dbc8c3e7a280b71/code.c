#include <stdio.h>

int main() {
    int n, i, num;

    // Read the number of elements
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 != 0) {  // Print only odd numbers
            printf("%d ", num);
        }
    }
    
    printf("\n");  // New line for better formatting
    return 0;
}
