#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a==b){
        printf("Equal\n");
    } else if(a>b){
        printf("First\n");
    } else if(b>=a){
        printf("Second\n");
    }
    return 0;
}