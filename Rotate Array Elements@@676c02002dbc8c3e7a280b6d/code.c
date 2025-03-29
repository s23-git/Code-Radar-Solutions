#include <stdio.h>
int main(){
    int arr[N];
    int N;
    int K;
    printf("%d\n", N);
    printf("%d\n", K);
    scanf("%d", &N);
    scanf("%d", &K);

    for(int i=0; i<N; i++){
        printf("%d\n", arr[i]);
    }
    for(int i=0; i<N-i; i++){
        printf("%d\n", i);
    }
    for(int i=0; i<K-i; i++){
        printf("%d\n", i);
    }
    return 0;
}