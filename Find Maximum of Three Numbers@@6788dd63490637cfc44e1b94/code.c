#include<stdio.h>
int main(){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = (a>c,b && a>b,c && c<b,a && a<b,c && c>b,a && c>a,b);
    printf("%d\n", max);
    return 0;
}