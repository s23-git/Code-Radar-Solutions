#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        printf("%d", i);
        for(int j=n; j<n+i; j--){
            printf("%d\n", j);
        }
    }
    return 0;
}