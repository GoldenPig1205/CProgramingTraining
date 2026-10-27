#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score;
    long long sum = 0;
    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &score) != 1) return 0;
        sum += score;
    }
    printf("sum : %lld\n", sum);
    printf("avg : %.1f\n", sum / 5.0);
    return 0;
}
