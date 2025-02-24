#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    if(isvowel(ch)){
        printf("Vowel");
    }
    else if(isconsonant(ch)){
        printf("Consonant");
    }else{
        printf("Digit");
    }
    return 0;
}