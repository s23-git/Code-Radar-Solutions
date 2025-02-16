#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    if(num & (1 >> 32)){
        printf("Set\n");
    }else{
        print("Not Set\n");
    }
    return 0;
}