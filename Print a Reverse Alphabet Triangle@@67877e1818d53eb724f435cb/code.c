#include<stdio.h>
int main(){
    int N;
    char ch = 'A';
    scanf("%d", &N);
    scanf("%c", &ch);

    for(int i=1; i<=N; i++){
        for(char ch = 'A'; ch<='A'-i+1; ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}