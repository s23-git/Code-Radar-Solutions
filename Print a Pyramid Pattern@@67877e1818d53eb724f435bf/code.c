#include<stdio.h>
int main(){
    int N, i, j;
    scanf("%d", &N);

    for(int i=N; i<=N; i--){
        for(int j=N; j>i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}