#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a!=0 && a%b==0){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    return 0;
}