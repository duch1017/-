#include <stdio.h>

// 选择排序函数
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            // 寻找最小元素的索引
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // 将找到的最小元素与第一个元素交换
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    // 测试数据
    int data[] = {49, 38, 65, 97, 76, 13, 27, 57};
    int n = sizeof(data) / sizeof(data[0]);

    // 调用选择排序函数
    selectionSort(data, n);

    // 输出排序结果
    printf("排序后的数组: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}
