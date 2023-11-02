#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; // �ҵ�Ŀ��Ԫ�أ�����������
        } else if (arr[mid] < target) {
            low = mid + 1; // Ŀ��Ԫ�����Ұ벿��
        } else {
            high = mid - 1; // Ŀ��Ԫ������벿��
        }
    }

    return -1; // Ŀ��Ԫ��δ�ҵ�
}

int main() {
    int arr[] = {13, 27, 38, 49, 57, 65, 76, 97};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Ԫ�� %d �������е�����λ���� %d\n", target, result);
    } else {
        printf("Ԫ�� %d δ���������ҵ�\n", target);
    }

    return 0;
}