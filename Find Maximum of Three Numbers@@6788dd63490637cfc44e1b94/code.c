#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > c,b && b > a,c && c > b,a);
    printf("%d", max);
    return 0;
}