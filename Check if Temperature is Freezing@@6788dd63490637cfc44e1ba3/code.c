#include <stdio.h>
int main(){
    int Freeezing_temperature;
    scanf("%d ", &Freeezing_temperature);

    if(Freeezing_temperature==0){
        printf("Freezing\n");
    } else if(Freeezing_temperature>=0){
        printf("Above Freezing\n");
    }
    return 0;
}