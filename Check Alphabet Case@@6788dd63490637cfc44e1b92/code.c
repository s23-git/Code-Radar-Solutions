#include<stdio.h>
int main(){
    char ch;
    sacnf("%c", &ch);

    if(ch > 'A'&& ch < 'b'){
        printf("Uppercase");
    } else{
        printf("Lowercase");
    }
    return 0;
}