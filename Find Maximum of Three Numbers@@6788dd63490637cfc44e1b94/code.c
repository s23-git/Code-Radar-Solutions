#include<stdio.h>
int main(){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = (a>c,b && b>a,c && c>b,a);
    printf("%d\n", max);
    return 0;
}