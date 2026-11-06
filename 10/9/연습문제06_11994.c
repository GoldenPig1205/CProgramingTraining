#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score[4][4] = {0};
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (scanf("%d", &score[i][j]) != 1) return 0;
            score[i][3] += score[i][j];
            score[3][j] += score[i][j];
            score[3][3] += score[i][j];
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d%c", score[i][j], j == 3 ? '\n' : ' ');
        }
    }
    return 0;
}
