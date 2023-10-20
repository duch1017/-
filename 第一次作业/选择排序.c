#include <stdio.h>

// ��������Ԫ�صĺ���
int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

//��ӡ����Ԫ��
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
        // ������СԪ���뵱ǰλ��Ԫ��
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