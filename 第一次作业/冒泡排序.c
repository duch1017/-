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

// �ݹ�ð��������
int recursiveBubbleSort(int arr[], int n) {
    if (n == 1) {
        return 0; // �������������ֻ��һ��Ԫ�أ�������
    }
    // һ��������ð������
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }
    // �Լ�Сһ��Ԫ�ص���������еݹ�����
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