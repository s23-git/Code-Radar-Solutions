#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("%d", i);
        for(int j=0; j<n-i/; j++){
            printf("%d\n", j);
        }
    }
    return 0;
}