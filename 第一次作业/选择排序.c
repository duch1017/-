#include <stdio.h>

// 交换两个元素的函数
int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

//打印数组元素
int disp(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

int selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // 交换最小元素与当前位置元素
        swap(&arr[minIndex], &arr[i]);
    }
    return 0;
}

int main() {
    int arr[] = {49, 38, 65, 97, 76, 13, 27, 57};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    disp(arr, n);
    selectionSort(arr, n);

    printf("\nSorted Array: ");
    disp(arr, n);
    return 0;
}