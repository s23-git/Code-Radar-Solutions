#include<stdio.h>
int main(){
    int A, B, C, D, F;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &F);

    if(A>=90){
        printf("A\n");
    }
    else if(B>=80 && B<=90){
        printf("B\n");
    }
    else if(C>=70 && C<80){
        printf("C\n");
    }
    else if(D>=60 && D<70){
        printf("D\n");
    } else{
        printf("F\n");
    }
    return 0;
}