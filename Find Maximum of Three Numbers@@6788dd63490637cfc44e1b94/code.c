#include<stdio.h>
int main(){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = (a>c && a>b && c<b && a<b && c>b && c>a);
    printf("%d\n", max);
    return 0;
}