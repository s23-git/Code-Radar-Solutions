#include<stdio.h>
int main(){
    int N;
    char ch = 'A';
    scanf("%d", &N);
    scanf("%c", &ch);

    for(int i='A'; i<=N; i++){
        for(char ch='A'; ch<='A'; ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}