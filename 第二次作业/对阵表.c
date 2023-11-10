#include <stdio.h>

void generateMatchups(int k) {
    int matchups[k][k - 1];

    // 初始化比赛对阵表
    for (int i = 0; i < k; i++) {
        int opponent = (i + 1) % k + 1;
        for (int j = 0; j < k - 1; j++) {
            matchups[i][j] = opponent++;
            if (opponent > k) {
                opponent = 1;
            }
        }
    }

    // 输出比赛对阵表
    printf("队伍\t第一天对手\t第二天对手\t第三天对手\n");
    for (int i = 0; i < k; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < k - 1; j++) {
            printf("%d\t\t", matchups[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int k;

    // 输入队伍数量
    printf("请输入队伍数量：");
    scanf("%d", &k);

    // 调用函数生成比赛对阵表
    generateMatchups(k);

    return 0;
}
