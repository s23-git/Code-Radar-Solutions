#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("greater integer: %d\n", a);
    } else{
        printf("greater integer: %d\n", b);
    }
    return 0;
}