#include<stdio.h>
int main(){
    int N, i, j, k;
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        for(j = i; j < N; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
