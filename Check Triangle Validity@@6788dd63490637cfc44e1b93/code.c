#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter three sides of a triangle: ");
    scanf("%d %d %d, &a, &b, &c");

    if(a+b > c && a+c > b && b+c > a){
        printf("Valid");
    }else{
        printf(Invalid);
    }

    return 0;
}