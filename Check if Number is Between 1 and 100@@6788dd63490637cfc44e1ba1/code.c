#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(1>n && n<100){
        printf("In Range\n");
    } else{
        printf("Out of Range\n");
    }
    return 0;
}