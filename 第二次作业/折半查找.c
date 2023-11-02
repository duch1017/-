#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; // 找到目标元素，返回其索引
        } else if (arr[mid] < target) {
            low = mid + 1; // 目标元素在右半部分
        } else {
            high = mid - 1; // 目标元素在左半部分
        }
    }

    return -1; // 目标元素未找到
}

int main() {
    int arr[] = {13, 27, 38, 49, 57, 65, 76, 97};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("元素 %d 在数组中的索引位置是 %d\n", target, result);
    } else {
        printf("元素 %d 未在数组中找到\n", target);
    }

    return 0;
}