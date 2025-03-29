#include<stdio.h>
int main(){
    int arr;
    scanf("%d", &arr);

    if(arr % 2){
        printf("%d", arr);
    } else if(arr % 2 != 0){
        printf("%d", arr);
    }
    return 0;
}