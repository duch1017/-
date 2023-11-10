#include <stdio.h>

// 交换两个整数的函数
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//打印数组元素
int disp(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

// 分区函数，用于将数组分为左右两部分，并返回分区点的索引
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
//            disp(arr,8);
//            printf("\n");
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// 快速排序函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // 递归排序分区的左侧和右侧
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int arr[] = {49, 38, 65, 97, 76, 13, 27, 57};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("排序前：\n");
    disp(arr,n);
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("排序后：\n");
    disp(arr,n);

    return 0;
}