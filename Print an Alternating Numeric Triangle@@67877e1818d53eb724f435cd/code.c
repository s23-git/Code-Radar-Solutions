#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d\n", i);
        for(int j=0; j<n+i-1; j++){
            printf("%d ", j%2);
        }
    }
    return 0;
}