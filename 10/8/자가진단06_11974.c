#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[100];
    int i, n = 0, max, min;
    while (n < 100) {
        if (scanf("%d", &a[n]) != 1 || a[n] == 0) break;
        n++;
    }
    if (n == 0) return 0;
    max = min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("%lld\n", (long long)max - min);
    return 0;
}
