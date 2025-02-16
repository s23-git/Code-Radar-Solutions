#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n > 0 && n < 0 || n == 0){
        printf("Positive, Negative, Zero");
    } else{
        printf("no");
    }

    return 0;
}