#include<stdio.h>
int main(){
    int A, B, C, D, F;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &F);

    if(A>=90){
        printf("A\n");
    }
    else if(85){
        printf("B\n");
    }
    else if(75){
        printf("C\n");
    }
    else if(65){
        printf("D\n");
    } else{
        printf("F\n");
    }
    return 0;
}