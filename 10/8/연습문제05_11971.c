#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[100];
    int n, i, max;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 0;
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }
    max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    printf("%d\n", max);
    return 0;
}
