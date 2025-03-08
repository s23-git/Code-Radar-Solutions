#include <stdio.h>
int main(){
    int age=1, citizen status=0;
    scanf("%d %d", &age, &citizen status);

    if(age>18){
        printf("Eligible\n");
    } else{
        printf("Not eligible");
    }
    return 0;
}