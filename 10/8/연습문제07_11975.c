#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10];
    int i, sum = 0;
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
        sum += a[i];
    }
    printf("sum = %d\navg = %.1f\n", sum, sum / 10.0);
    return 0;
}
