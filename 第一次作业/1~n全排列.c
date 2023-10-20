#include <stdio.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int permute(int *arr, int start, int end) {
    if (start == end) {
        for (int i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = start; i <= end; i++) {
            swap(&arr[start], &arr[i]);
            permute(arr, start + 1, end);
            swap(&arr[start], &arr[i]);  // Backtrack
        }
    }
    return 0;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    permute(arr, 0, n - 1);
    return 0;
}