#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, score, sum = 0;
    double avg;
    if (scanf("%d", &n) != 1 || n < 1) return 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &score) != 1) return 0;
        sum += score;
    }
    avg = (double)sum / n;
    printf("avg : %.1f\n", avg);
    if (avg >= 80) printf("pass\n");
    else printf("fail\n");
    return 0;
}
