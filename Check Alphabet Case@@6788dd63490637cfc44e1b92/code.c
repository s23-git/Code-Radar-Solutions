#include<stdio.h>
int main(){
    char ch;
    sacnf("%c", &ch);

    if(ch > 'A-Z' || ch < 'a-z'){
        printf("Uppercase" or "Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}