#include <stdio.h>

// 定义物品的数量
#define N 5

// 定义背包的容量
#define W 10

// 定义物品的重量和价值
int weights[N] = {2, 2, 6, 5, 4};
int values[N] = {6, 3, 5, 4, 6};

// 计算所有可能组合的总价值
int bruteForceKnapsack(int weight[], int value[], int n, int capacity) {
    if (n == 0 || capacity == 0)
        return 0;

    // 不包含第n个物品
    int withoutN = bruteForceKnapsack(weight, value, n - 1, capacity);

    // 包含第n个物品
    int withN = 0;
    if (weight[n - 1] <= capacity) {
        withN = value[n - 1] + bruteForceKnapsack(weight, value, n - 1, capacity - weight[n - 1]);
    }

    // 返回包含和不包含第n个物品中的最大值
    return (withN > withoutN) ? withN : withoutN;
}

int main() {
    // 调用函数并输出结果
    int result = bruteForceKnapsack(weights, values, N, W);
    printf("在容量为 %d 的背包中，可以获得的最大价值为：%d\n", W, result);

    return 0;
}
