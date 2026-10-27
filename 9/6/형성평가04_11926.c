#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, number;
    long long sum = 0;
    if (scanf("%d", &n) != 1 || n < 1) return 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &number) != 1) return 0;
        sum += number;
    }
    printf("%.2f\n", (double)sum / n);
    return 0;
}
