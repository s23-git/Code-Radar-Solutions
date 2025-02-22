#include<stdio.h>
int main(){
    char ch;
    sacnf("%c", &ch);

    if(ch > 'A' || ch < 'b'){
        printf("Uppercase" or "Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}