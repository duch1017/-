#include <stdio.h>

void findMaxAndSecondMax(int arr[], int n) {
    int max1 = arr[0]; // 用于存储最大元素
    int max2 = arr[0]; // 用于存储次大元素

    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1; // 当遇到更大的元素时，将之前的最大元素赋值给次大元素
            max1 = arr[i]; // 更新最大元素
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i]; // 更新次大元素
        }
    }

    printf("最大元素: %d\n", max1);
    printf("次大元素: %d\n", max2);
}

int main() {
    int arr[] = {2, 5, 1, 4, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxAndSecondMax(arr, n);

    return 0;
}