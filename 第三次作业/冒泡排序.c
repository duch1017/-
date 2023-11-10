#include <stdio.h>

// 冒泡排序函数
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // 如果当前元素比下一个元素大，交换它们
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // 测试数据
    int data[] = {49, 38, 65, 97, 76, 13, 27, 57};
    int n = sizeof(data) / sizeof(data[0]);

    // 调用冒泡排序函数
    bubbleSort(data, n);

    // 输出排序结果
    printf("排序后的数组: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}
