#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10];
    int i;
    long long odd = 0, even = 0;
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
        if (i % 2 == 0) odd += a[i];
        else even += a[i];
    }
    printf("odd : %lld\neven : %lld\n", odd, even);
    return 0;
}
