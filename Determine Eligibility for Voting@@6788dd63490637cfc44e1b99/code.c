#include<stdio.h>
int main(){
    int age;
    scanf("%d", &age);

    if(age>18){
        printf("Eligible\n");
    } 
    else if(age<18){
        printf("Not Eligible\n");
    }
    return 0;

}