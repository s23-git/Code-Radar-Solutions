#include <stdio.h>
int main(){
    int n, Freeezing_temperature;
    scanf("%d ", &n);

    if(Freeezing_temperature==0){
        printf("Freezing\n");
    } else if(Freeezing_temperature>=0){
        printf("Above Freezing\n");
    }
    return 0;
}