#include <stdio.h>

// ������Ʒ������
#define N 5

// ���屳��������
#define W 10

// ������Ʒ�������ͼ�ֵ
int weights[N] = {2, 2, 6, 5, 4};
int values[N] = {6, 3, 5, 4, 6};

// �������п�����ϵ��ܼ�ֵ
int bruteForceKnapsack(int weight[], int value[], int n, int capacity) {
    if (n == 0 || capacity == 0)
        return 0;

    // ��������n����Ʒ
    int withoutN = bruteForceKnapsack(weight, value, n - 1, capacity);

    // ������n����Ʒ
    int withN = 0;
    if (weight[n - 1] <= capacity) {
        withN = value[n - 1] + bruteForceKnapsack(weight, value, n - 1, capacity - weight[n - 1]);
    }

    // ���ذ����Ͳ�������n����Ʒ�е����ֵ
    return (withN > withoutN) ? withN : withoutN;
}

int main() {
    // ���ú�����������
    int result = bruteForceKnapsack(weights, values, N, W);
    printf("������Ϊ %d �ı����У����Ի�õ�����ֵΪ��%d\n", W, result);

    return 0;
}
