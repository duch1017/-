#include <stdio.h>

void generateRoundRobinMatches(int k) {
    if (k < 2) {
        printf("������Ҫ��֧���������б�����\n");
        return;
    }

    printf("��������£�\n");

    for (int i = 1; i <= k; i++) {
        for (int j = i + 1; j <= k; j++) {
            printf("���� %d vs ���� %d\n", i, j);
        }
    }
}

int main() {
    int k;

    printf("������������� (k)��");
    scanf("%d", &k);

    generateRoundRobinMatches(k);

    return 0;
}
