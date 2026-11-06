#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[4][3];
    int i, j;
    long long sum, total = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (scanf("%d", &a[i][j]) != 1) return 0;
        }
    }
    for (i = 0; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) sum += a[i][j];
        printf("%lld\n", sum);
        total += sum;
    }
    printf("%lld\n", total);
    return 0;
}
