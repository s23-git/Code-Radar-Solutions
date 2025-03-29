#include <stdio.h>

// Function to reverse a segment of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotateArray(int arr[], int N, int K) {
    K = K % N; // Handle cases where K > N

    // Step 1: Reverse the entire array
    reverse(arr, 0, N - 1);
    
    // Step 2: Reverse the first K elements
    reverse(arr, 0, K - 1);
    
    // Step 3: Reverse the remaining elements
    reverse(arr, K, N - 1);
}

// Function to print the array
void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int K;
    scanf("%d", &K);

    rotateArray(arr, N, K);
    printArray(arr, N);

    return 0;
}
please explain