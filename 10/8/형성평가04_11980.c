#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double weight[6], sum = 0;
    int i;
    for (i = 0; i < 6; i++) {
        if (scanf("%lf", &weight[i]) != 1) return 0;
        sum += weight[i];
    }
    printf("%.1f\n", sum / 6);
    return 0;
}
