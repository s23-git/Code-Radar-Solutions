#include <stdio.h>
void rotate(int arr[], int N, int K, int reverse) {
    K %= N;  
    reverse(arr, 0, N - 1);
    reverse(arr, 0, K - 1);
    reverse(arr, K, N - 1);
}

int main() {
    int N, K;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    scanf("%d", &K);

    rotate(arr, N, K);
    
    for (int i = 0; i < N; i++) printf("%d ", arr[i]);
}
