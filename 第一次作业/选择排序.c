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

int recursiveSelectionSort(int arr[], int n, int index) {
    if (index >= n - 1) {
        return; // 基本情况，只有一个元素或已经排序完
    }

    int minIndex = index;
    // 查找未排序部分的最小元素
    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // 将最小元素移到排序部分
    swap(&arr[index], &arr[minIndex]);

    // 对下一个位置进行递归排序
    recursiveSelectionSort(arr, n, index + 1);
    return 0;
}

int main() {
    int arr[] = {49, 38, 65, 97, 76, 13, 27, 57};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    disp(arr, n);
    recursiveSelectionSort(arr, n, 0);

    printf("\nSorted Array: ");
    disp(arr, n);
    return 0;
}