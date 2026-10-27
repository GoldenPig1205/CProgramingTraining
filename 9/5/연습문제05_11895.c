#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, max = 0, min = 101;
    while (scanf("%d", &n) == 1 && n != 0) {
        if (n < 1 || n > 100) continue;
        if (n > max) max = n;
        if (n < min) min = n;
    }
    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);
    return 0;
}
