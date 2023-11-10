#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int maxSum = arr[0];

    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            // 计算当前子序列的和
            currentSum += arr[j];

            // 更新最大子序列和
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    return maxSum;
}

int main() {
    // 测试数据
    int data[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(data) / sizeof(data[0]);

    // 调用最大子序列和函数
    int maxSum = maxSubArraySum(data, n);

    // 输出结果
    printf("最大连续子序列和为: %d\n", maxSum);

    return 0;
}
