#include <stdio.h>

// ð��������
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // �����ǰԪ�ر���һ��Ԫ�ش󣬽�������
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // ��������
    int data[] = {49, 38, 65, 97, 76, 13, 27, 57};
    int n = sizeof(data) / sizeof(data[0]);

    // ����ð��������
    bubbleSort(data, n);

    // ���������
    printf("����������: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}
