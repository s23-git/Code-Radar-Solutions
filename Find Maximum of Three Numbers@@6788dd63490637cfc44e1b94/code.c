#include<stdio.h>
int main(){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    int max = (a>c,b && a>b,c && b,a>c && b,c>a && c>b,a && c>a,b);
    printf("%d\n", max);
    return 0;
}