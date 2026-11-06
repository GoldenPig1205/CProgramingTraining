#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int score[5][4];
    int i, j, sum;
    double avg;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            if (scanf("%d", &score[i][j]) != 1) return 0;
        }
    }
    for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 0; j < 4; j++) sum += score[i][j];
        avg = round(sum / 4.0 * 10) / 10;
        printf("%d %.1f\n", sum, avg);
    }
    return 0;
}
