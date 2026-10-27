#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score, count = 0;
    long long sum = 0;
    while (scanf("%d", &score) == 1) {
        if (score < 0 || score > 100) break;
        sum += score;
        count++;
    }
    double average = count > 0 ? (double)sum / count : 0.0;
    printf("sum : %lld\navg : %.1f\n", sum, average);
    return 0;
}
