#include <stdio.h>

void generateRoundRobinMatches(int k) {
    if (k < 2) {
        printf("至少需要两支队伍来进行比赛。\n");
        return;
    }

    printf("对阵表如下：\n");

    for (int i = 1; i <= k; i++) {
        for (int j = i + 1; j <= k; j++) {
            printf("队伍 %d vs 队伍 %d\n", i, j);
        }
    }
}

int main() {
    int k;

    printf("请输入队伍数量 (k)：");
    scanf("%d", &k);

    generateRoundRobinMatches(k);

    return 0;
}
