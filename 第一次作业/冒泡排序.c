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

// 递归冒泡排序函数
int recursiveBubbleSort(int arr[], int n) {
    if (n == 1) {
        return 0; // 基本情况，数组只有一个元素，已排序
    }
    // 一次完整的冒泡排序
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }
    // 对减小一个元素的子数组进行递归排序
    recursiveBubbleSort(arr, n - 1);
    return 0;
}

int main() {
    int arr[] = {49, 38, 65, 97, 76, 13, 27, 57};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    disp(arr, n);
    recursiveBubbleSort(arr, n);
    printf("\nSorted Array: ");
    disp(arr, n);
    return 0;
}