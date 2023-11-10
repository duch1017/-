#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int maxSum = arr[0];

    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            // ���㵱ǰ�����еĺ�
            currentSum += arr[j];

            // ������������к�
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    return maxSum;
}

int main() {
    // ��������
    int data[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(data) / sizeof(data[0]);

    // ������������кͺ���
    int maxSum = maxSubArraySum(data, n);

    // ������
    printf("������������к�Ϊ: %d\n", maxSum);

    return 0;
}
