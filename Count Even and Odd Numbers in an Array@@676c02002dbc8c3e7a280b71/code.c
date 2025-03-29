#include<stdio.h>
int main(){
    int arr;
    scanf("%d", &arr);

    if(arr % 2){
        printf("even");
    } else if(arr % 2 != 0){
        printf("odd");
    }
    return 0;
}