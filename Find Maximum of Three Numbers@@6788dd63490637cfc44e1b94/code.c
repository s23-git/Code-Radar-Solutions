#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max;
    if(a>=b && a>=c){
        max = a;
    }
    else if(b>=a && b>=c){
        max = b;
    } else{
        max = c;
    }
    printf("%d", max);
    return 0;
}