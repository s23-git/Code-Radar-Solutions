#include<stdio.h>
int main(){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = (a,b > c && a,c > b && b,c > a);
    printf("%d\n", max);
    return 0;
}