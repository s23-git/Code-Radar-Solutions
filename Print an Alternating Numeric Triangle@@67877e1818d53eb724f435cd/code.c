#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        printf("%d\n", i);
        for(int j=0; j<n-i; j++){
            printf("%d ", j);
        }
    }
    return 0;
}