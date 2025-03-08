#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a==b && -a==-b){
        printf("Same Sign\n");
    }
    else if(a==-b && -a==b){
        printf("Different Sign\n");
    }
    return 0;
}