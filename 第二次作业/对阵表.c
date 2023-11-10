#include <stdio.h>

void generateMatchups(int k) {
    int matchups[k][k - 1];

    // ��ʼ�����������
    for (int i = 0; i < k; i++) {
        int opponent = (i + 1) % k + 1;
        for (int j = 0; j < k - 1; j++) {
            matchups[i][j] = opponent++;
            if (opponent > k) {
                opponent = 1;
            }
        }
    }

    // ������������
    printf("����\t��һ�����\t�ڶ������\t���������\n");
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

    // �����������
    printf("���������������");
    scanf("%d", &k);

    // ���ú������ɱ��������
    generateMatchups(k);

    return 0;
}
