#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter three sides of a triangle: ");
    scanf("%d %d %d, &a, &b, &c");

    formation_of_triangle = a + b + c;
    printf("%d", formation_of_triangle);

    if(sides form a triangle){
        printf("Valid");
    }else{
        printf(Invalid);
    }

    return 0;
}