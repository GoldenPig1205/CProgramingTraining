#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[4][2];
    int i, j;
    long long row, col[2] = {0}, total = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            if (scanf("%d", &a[i][j]) != 1) return 0;
        }
    }
    for (i = 0; i < 4; i++) {
        row = 0;
        for (j = 0; j < 2; j++) {
            row += a[i][j];
            col[j] += a[i][j];
            total += a[i][j];
        }
        printf("%lld%c", row / 2, i == 3 ? '\n' : ' ');
    }
    printf("%lld %lld\n%lld\n", col[0] / 4, col[1] / 4, total / 8);
    return 0;
}
