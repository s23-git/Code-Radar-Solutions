#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b && b < a){
        printf("greater integer");
    } else{
        printf("no");
    }
    return 0;
}