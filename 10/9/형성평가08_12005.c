#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10][10] = {0};
    int n, i, j;
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 0;
    for (i = 0; i < n; i++) {
        a[i][0] = 1;
        for (j = 1; j <= i; j++) a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            printf("%d%c", a[i][j], j == i ? '\n' : ' ');
        }
    }
    return 0;
}
