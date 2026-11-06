#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[100] = {100};
    int i, n = 2;
    if (scanf("%d", &a[1]) != 1) return 0;
    while (n < 100) {
        a[n] = a[n - 2] - a[n - 1];
        n++;
        if (a[n - 1] < 0) break;
    }
    for (i = 0; i < n; i++) {
        printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
