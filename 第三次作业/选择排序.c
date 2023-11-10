#include <stdio.h>

// ѡ��������
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            // Ѱ����СԪ�ص�����
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // ���ҵ�����СԪ�����һ��Ԫ�ؽ���
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    // ��������
    int data[] = {49, 38, 65, 97, 76, 13, 27, 57};
    int n = sizeof(data) / sizeof(data[0]);

    // ����ѡ��������
    selectionSort(data, n);

    // ���������
    printf("����������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}
