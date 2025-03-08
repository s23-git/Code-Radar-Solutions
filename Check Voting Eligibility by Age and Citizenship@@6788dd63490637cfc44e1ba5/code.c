#include <stdio.h>
int main(){
    int age=1, citizen_status=0;
    scanf("%d %d", &age, &citizen_status);

    if(age>=18 && citizen_status){
        printf("Eligible\n");
    } else{
        printf("Not Eligible");
    }
    return 0;
}