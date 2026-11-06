#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[5];
    int i;
    long long sum = 0;
    for (i = 0; i < 5; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }
    for (i = 0; i < 5; i += 2) sum += a[i];
    printf("%lld\n", sum);
    return 0;
}
