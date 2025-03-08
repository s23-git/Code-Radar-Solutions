#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n == 2 && n%2 == 0){
        printf("Prime\n");
    } else{
        printf("Not Prime\n");
    }
    return 0;
}