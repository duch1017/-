#include <stdio.h>

void findMaxAndSecondMax(int arr[], int n) {
    int max1 = arr[0]; // ���ڴ洢���Ԫ��
    int max2 = arr[0]; // ���ڴ洢�δ�Ԫ��

    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1; // �����������Ԫ��ʱ����֮ǰ�����Ԫ�ظ�ֵ���δ�Ԫ��
            max1 = arr[i]; // �������Ԫ��
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i]; // ���´δ�Ԫ��
        }
    }

    printf("���Ԫ��: %d\n", max1);
    printf("�δ�Ԫ��: %d\n", max2);
}

int main() {
    int arr[] = {2, 5, 1, 4, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxAndSecondMax(arr, n);

    return 0;
}