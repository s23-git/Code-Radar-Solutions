#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > b,c || b > a,c || c > a,b);
    printf("%d", max);
    return 0;
}